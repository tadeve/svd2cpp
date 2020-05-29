import json
import xmltodict
import re
from string import Template
from collections import namedtuple

accessors = {
    "read-only": "Readable",
    "write-only": "Writable",
    "read-write": "ReadableWritable",
}


def num_conv(match):
    s = match.group(0)[1:-1]
    return s


def num_conv_hex(match):
    s = match.group(0)[1:-1]
    a = int(s, base=16)
    return str(a)


def access_to_usage(access):
    if access == "read-only":
        return "read"
    elif access == "write-only":
        return "write"
    else:
        return "read-write"


def device_from_xml(path, gen_json=False):
    with open(path, "r") as file:
        svd_text = file.read()
    d = xmltodict.parse(svd_text)
    d_json = json.dumps(d).replace("\n", "").replace("  ", "")
    d_json = re.sub('"[0-9]*"', num_conv, d_json)
    d_json = re.sub('"[0-9]*x[0-9ABCDEF]*"', num_conv_hex, d_json)
    if gen_json:
        with open("device.json", "w") as file:
            file.write(d_json)
    device = json.loads(d_json)
    return Device(device)


def force_list(obj):
    if isinstance(obj, list):
        return obj
    else:
        return [obj]


CPU = namedtuple(
    "CPU",
    [
        "name",
        "revision",
        "endian",
        "mpuPresent",
        "fpuPresent",
        "nvicPrioBits",
        "vendorSystickConfig",
    ],
)
EnumValue = namedtuple("EnumValue", ["name", "description", "value"])
Range = namedtuple("Range", ["minimum", "maximum"])
AddressBlock = namedtuple("AddressBlock", ["offset", "size", "usage"])
Interrupt = namedtuple("Interrupt", ["name", "description", "value"])


class Enum:
    def __init__(self, e):
        self.dict = e
        self.name = self.dict["name"]
        self.usage = self.dict["usage"]
        if isinstance(self.dict["enumeratedValue"], list):
            self.enumValues = [
                EnumValue(**value) for value in self.dict["enumeratedValue"]
            ]
        else:
            self.enumValues = [EnumValue(**self.dict["enumeratedValue"])]

    def type_name(self):
        return f"{self.name}_t"

    def code(self):
        with open("templates/field_enum_template.txt") as file:
            field_enum_template = file.read()
        enum_variants = []
        for enumval in self.enumValues:
            evar = f"{enumval.name} = {enumval.value}, // {enumval.description}\n"
            enum_variants.append(evar)
        enum_data = {
            "name": self.type_name(),
            "enum_variants": "".join(enum_variants),
        }
        enum = Template(field_enum_template).substitute(enum_data)
        return enum


class Field:
    def __init__(self, f, r):
        self.register = r
        self.dict = f
        self.name = self.dict["name"]
        self.description = self.dict["description"]
        self.bitOffset = self.dict["bitOffset"]
        self.bitWidth = self.dict["bitWidth"]
        if "access" in self.dict:
            self.access = self.dict["access"]
        else:
            self.access = "read-write"
        self.enums = []
        self.writeConstraints = []
        if "enumeratedValues" in self.dict:
            enumeratedValues = force_list(self.dict["enumeratedValues"])
            for enval in enumeratedValues:
                if "name" in enval:
                    self.enums.append(Enum(enval))
                else:
                    derived_from = enval["@derivedFrom"]
                    enum_dict = self.register.find_enum_dict(derived_from)
                    self.enums.append(Enum(enum_dict))

        elif "writeConstraint" in self.dict:
            write_constraints_dict = force_list(self.dict["writeConstraint"])
            for write_range in write_constraints_dict:
                self.writeConstraints.append(Range(**write_range["range"]))
        else:
            if self.bitWidth < 8:
                self.enums.append(self.gen_default_enum())
            else:
                self.writeConstraints.append(self.gen_default_writeConstraint())

    def gen_default_enum(self):
        default_enum_dict = {
            "name": f"{self.name}_t",
            "usage": access_to_usage(self.access),
            "enumeratedValue": [
                {
                    "name": f"{self.name}_{value}",
                    "description": f"field has value {value:#0{(self.bitWidth//4)+2}x}",
                }
                for value in range(2 ** (self.bitWidth))
            ],
        }
        default_enum = Enum(default_enum_dict)
        return default_enum

    def gen_default_writeConstraint(self):
        return Range(minimum=0, maximum=(2 ** self.bitWidth) - 1)

    def read_type(self):
        if len(self.enums) > 0:
            for enum in self.enums:
                if enum.usage == "read" or enum.usage == "read-write":
                    return enum.type_name()
        elif len(self.writeConstraints) > 0:
            if self.bitWidth <= 8:
                return "uint8_t"
            elif self.bitWidth <= 16:
                return "uint16_t"
            else:
                return "uint32_t"
        else:
            print("should never be here !!!!")
            return None

    def write_type(self):
        if len(self.enums) > 0:
            for enum in self.enums:
                if enum.usage == "write" or enum.usage == "read-write":
                    return enum.type_name()
        elif len(self.writeConstraints) > 0:
            if self.bitWidth <= 8:
                return "uint8_t"
            elif self.bitWidth <= 16:
                return "uint16_t"
            else:
                return "uint32_t"
        else:
            raise Exception("should never be here !!!!")
            return None

    def code_write_method(self):
        if self.access == "write-only":
            with open("field_write_function_wo_template.txt", "r") as file:
                template = file.read()
        elif self.access == "read-write":
            with open("field_write_function_template.txt", "r") as file:
                template = file.read()
        else:
            raise Exception("should never be here !!!")
        template_data = {
            "name": self.name,
            "type": self.write_type(),
            "offset": self.bitOffset,
            "mask": f"{((2 ** self.bitWidth) - 1) << self.bitOffset:#0{(self.bitWidth//4)+2}x}",
        }
        code = Template(template).substitute(template_data)

    def code_read_method(self):
        with open("field_read_function_template.txt", "r") as file:
            template = file.read()
        template_data = {
            "name": self.name,
            "type": self.write_type(),
            "offset": self.bitOffset,
            "mask": f"{((2 ** self.bitWidth) - 1) << self.bitOffset:#0{(self.bitWidth//4)+2}x}",
        }
        code = Template(template).substitute(template_data)

    def code_types(self):
        field_enums = []
        if len(self.enums) > 0:
            for enum in self.enums:
                field_enums.append(enum.code())
        return "\n".join(field_enums)

    def code_methods(self):
        if self.access == "read-write":
            read = self.code_read_method()
            write = self.code_write_method()
            return "\n".join([read, write])
        elif self.access == "read-only":
            return self.code_read_method()
        elif self.access == "write-only":
            return self.code_write_method()


class Register:
    def __init__(self, r):
        self.dict = r
        self.name = self.dict["name"]
        if "displayName" in self.dict:
            self.displayName = self.dict["displayName"]
        else:
            self.displayName = self.name
        self.description = self.dict["description"]
        self.addressOffset = self.dict["addressOffset"]
        self.size = self.dict["size"]
        if "access" in self.dict:
            self.access = self.dict["access"]
        else:
            self.access = "read-write"
        self.resetValue = self.dict["resetValue"]
        self.fields = []
        if isinstance(self.dict["fields"]["field"], list):
            for fl in self.dict["fields"]["field"]:
                self.fields.append(Field(fl, self))
        else:
            self.fields.append(Field(self.dict["fields"]["field"], self))

    def find_field_dict(self, field_name):
        for field in self.dict["fields"]["field"]:
            if field["name"] == field_name:
                return field
        return None

    def find_enum_dict(self, enum_name):
        for field in self.dict["fields"]["field"]:
            if "enumeratedValues" in field:
                force_list(field["enumeratedValues"])
                for enum in field["enumeratedValues"]:
                    if "name" in enum:
                        if enum["name"] == enum_name:
                            return enum
        return None

    def class_name(self):
        return f"{self.name}::{self.name}"

    def code(self):
        with open("templates/register_namespace_template.txt") as file:
            register_namespace_template = file.read()
        register_namespace_data = {
            "name": self.name,
            "access": accessors[self.access],
            "enum_definitions": self.code_enums(),
            "methods": self.code_methods(),
        }
        code = Template(register_namespace_template).substitute(register_namespace_data)

    def code_instance(self):
        with open("templates/register_instance_template.txt") as file:
            register_instance_template = file.read()
        register_instance_data = {
            "register_class": self.name,
            "offset": self.addressOffset,
            "register_name": self.name,
        }
        code = Template(register_instance_template).substitute(register_instance_data)
        return code

    def code_enums(self):
        register_enums = []
        for field in self.fields:
            register_enums.append(field.code_types())
        return "\n".join(set(register_enums))

    def code_methods(self):
        pass


class Peripheral:
    def __init__(self, p):
        self.dict = p
        self.name = self.dict["name"]
        if "description" in self.dict:
            self.description = self.dict["description"]
        else:
            self.description = ""
        if "groupName" in self.dict:
            self.groupName = self.dict["groupName"]
        else:
            self.groupName = self.name
        self.baseAddress = self.dict["baseAddress"]
        self.addressBlock = self.dict["name"]
        self.name = self.dict["name"]
        if "addressBlock" in self.dict:
            self.addressBlock = AddressBlock(**self.dict["addressBlock"])
        else:
            self.AddressBlock = None
        self.interrupts = []
        if "interrupt" in self.dict:
            if isinstance(self.dict["interrupt"], list):
                for itrpt in self.dict["interrupt"]:
                    self.interrupts.append(Interrupt(**itrpt))
            else:
                self.interrupts.append(Interrupt(**self.dict["interrupt"]))
        if isinstance(self.dict["registers"]["register"], list):
            self.registers = [Register(r) for r in self.dict["registers"]["register"]]
        else:
            self.registers = [Register(self.dict["registers"]["register"])]

    def code(self):
        with open("templates/header_file_template.txt") as file:
            header_file_template = file.read()
        header_file_data = {
            "namespace": self.name,
            "peripheral_class": self.code_class(),
            "register_classes": self.code_reg_defs(),
        }
        code = Template(header_file_template).substitute(header_file_data)
        return code

    def code_reg_defs(self):
        registers_namespaces = []
        for register in self.registers:
            registers_namespaces.append(register.code())
        return "\n".join(registers_namespaces)

    def code_class(self):
        with open("templates/peripheral_class_template.txt") as file:
            peripheral_class_template = file.read()
        register_instances = []
        for register in self.registers:
            register_instances.append(register.code_instance())
        peripheral_class_data = {
            "periph_name": self.groupName,
            "registers_definition": "\n".join(register_instances),
        }
        code = Template(peripheral_class_template).substitute(peripheral_class_data)
        return code


class Device:
    def __init__(self, d):

        device = d["device"]
        cpu = device["cpu"]

        self.name = device["name"]
        self.version = device["version"]
        self.description = device["description"]
        self.cpu = CPU(
            name=cpu["name"],
            revision=cpu["revision"],
            endian=cpu["endian"],
            mpuPresent=True if cpu["mpuPresent"] == "true" else False,
            fpuPresent=True if cpu["fpuPresent"] == "true" else False,
            nvicPrioBits=cpu["nvicPrioBits"],
            vendorSystickConfig=True if cpu["vendorSystickConfig"] == "true" else False,
        )
        self.addressUnitBits = device["addressUnitBits"]
        self.width = device["width"]
        self.size = device["size"]
        self.resetValue = device["resetValue"]
        self.resetMask = device["resetMask"]
        self.peripherals = []
        for p in device["peripherals"]["peripheral"]:
            if not "@derivedFrom" in p:
                peri = Peripheral(p)
                self.peripherals.append(peri)
