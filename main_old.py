import re
import xmltodict
import json
from string import Template
from pprint import pprint
import types


def force_list(item):
    if not isinstance(item, list):
        return [item]
    else:
        return item


def num_conv(match):
    s = match.group(0)[1:-1]
    return s


def num_conv_hex(match):
    s = match.group(0)[1:-1]
    a = int(s, base=16)
    return str(a)


def register_class_name(register):
    return f"{register['name']}::{register['name']}"


def register_instance_name(register):
    return register["name"]


def register_access_name(register):
    if register["access"] == "write-only":
        return "Writable"
    elif register["access"] == "read-only":
        return "Readable"
    else:
        return "ReadableWritable"


def get_field_derive(field, register):
    ret = field
    for f in register["fields"]["field"]:
        if "name" in f["enumeratedValues"]:
            if (
                f["enumeratedValues"]["name"]
                == field["enumeratedValues"]["@derivedFrom"]
            ):
                ret = f
    return ret


def get_field_access(field, register):
    if "usage" in field["enumeratedValues"]:
        return field["enumeratedValues"]["usage"]
    else:
        a = get_field_derive(field, register)
        return a["enumeratedValues"]["usage"]


svd_text = open("stm32f412.svd.patched", "r").read()

d = xmltodict.parse(svd_text)
d_json = json.dumps(d).replace("\n", "").replace("  ", "")
d_json = re.sub('"[0-9]*"', num_conv, d_json)
d_json = re.sub('"[0-9]*x[0-9ABCDEF]*"', num_conv_hex, d_json)
# a = open("stm32f412_n.json", "w")
# a.write(d_json)
# a.close()

# s2 = pprint.pformat(device)
# a = open("stm32f412_dict.json", "w")
# a.write(s2)
# a.close()

field_write_function_template = open(
    "templates/field_write_function_template.txt"
).read()
field_write_function_wo_template = open(
    "templates/field_write_function_wo_template.txt"
).read()
field_read_function_template = open("templates/field_read_function_template.txt").read()
field_enum_template = open("templates/field_enum_template.txt").read()
register_instance_template = open("templates/register_instance_template.txt").read()
register_class_template = open("templates/register_class_template.txt").read()
peripheral_class_template = open("templates/peripheral_class_template.txt").read()
header_file_template = open("templates/header_file_template.txt").read()

groups = []


device = json.loads(d_json)["device"]
peripherals = force_list(device["peripherals"]["peripheral"])

for periph in peripherals:
    print(periph["groupName"], periph["name"])
    groups.append(periph["groupName"])
    registers = force_list(periph["registers"]["register"])
    register_classes = []
    register_instances = []
    for register in registers:
        pprint(register)
        fields = force_list(register["fields"]["field"])
        field_read_functions = []
        field_write_functions = []
        field_enums = []
        for field in fields:
            pprint(field)
            if "enumeratedValues" in field:
                field_data_type = f"{field['name']}_t"
                if "enumeratedValue" in field["enumeratedValues"]:
                    evs = field["enumeratedValues"]["enumeratedValue"]
                    print(field["name"])
                else:
                    df = get_field_derive(field, register)
                    evs = df["enumeratedValues"]["enumeratedValue"]
                    print(f"{field['name']} derived from {df['name']}")
                evs = force_list(evs)
                enum_variants = []
                for a in evs:
                    enum_variants.append(
                        f"{a['name']} = {a['value']}, //{a['description']}"
                    )
                field_value_enum_data = {
                    "name": field_data_type,
                    "enum_variants": "\n".join(enum_variants),
                }
                field_enum = Template(field_enum_template).substitute(
                    field_value_enum_data
                )
            else:
                field_enum = ""
                if field["bitWidth"] < 8:
                    field_data_type = "uint8_t"
                if field["bitWidth"] < 16:
                    field_data_type = "uint16_t"
                else:
                    field_data_type = "uint32_t"
            field_read_function_data = {
                "name": field["name"],
                "type": field_data_type,
                "mask": f"{((2**field['bitWidth'] - 1))<<field['bitOffset']:#010x}",
                "field_offset": field["bitOffset"],
            }
            field_write_function_data = {
                "name": field["name"],
                "type": field_data_type,
                "mask": f"{((2**field['bitWidth'] - 1))<<field['bitOffset']:#010x}",
                "field_offset": field["bitOffset"],
            }
            if "access" in register:
                if register["access"] == "write-only":
                    field_write_function = Template(
                        field_write_function_wo_template
                    ).substitute(field_write_function_data)
                    field_read_function = ""
                elif register["access"] == "read-only":
                    field_write_function = ""
                    field_read_function = Template(
                        field_read_function_template
                    ).substitute(field_read_function_data)
                else:
                    field_write_function = Template(
                        field_write_function_template
                    ).substitute(field_write_function_data)
                    field_read_function = Template(
                        field_read_function_template
                    ).substitute(field_read_function_data)
            else:
                if get_field_access(field, register) == "write-only":
                    field_write_function = Template(
                        field_write_function_wo_template
                    ).substitute(field_write_function_data)
                    field_read_function = ""
                elif get_field_access(field, register) == "read-only":
                    field_write_function = ""
                    field_read_function = Template(
                        field_read_function_template
                    ).substitute(field_read_function_data)
                else:
                    field_write_function = Template(
                        field_write_function_template
                    ).substitute(field_write_function_data)
                    field_read_function = Template(
                        field_read_function_template
                    ).substitute(field_read_function_data)
            if field_enum != "":
                field_enums.append(field_enum)
            if field_write_function != "":
                field_write_functions.append(field_write_function)
            if field_read_function != "":
                field_read_functions.append(field_read_function)
        register_class_data = {
            "name": register["name"],
            "access": register_access_name(register),
            "field_read_functions": "\n".join(field_read_functions),
            "field_write_functions": "\n".join(field_write_functions),
            "enum_definitions": "\n".join(field_enums),
        }
        register_instance_data = {
            "register_class": register_class_name(register),
            "offset": register["addressOffset"],
            "register_name": register_instance_name(register),
        }
        register_classes.append(
            Template(register_class_template).substitute(register_class_data)
        )
        register_instances.append(
            (
                register["addressOffset"],
                Template(register_instance_template).substitute(register_instance_data),
            )
        )
    register_instances.sort()
    register_instances = [a[1] for a in register_instances]
    peripheral_class_data = {
        "periph_name": periph["name"],
        "registers_definition": "\n".join(register_instances),
    }
    peripheral_class = Template(peripheral_class_template).substitute(
        peripheral_class_data
    )
    header_file_data = {
        "namespace": periph["name"],
        "register_classes": "\n".join(register_classes),
        "peripheral_class": peripheral_class,
    }
    header_file = Template(header_file_template).substitute(header_file_data)
    outfile = open(f"./out/{device['name'].lower()}_{periph['name'].lower()}.h", "a")
    outfile.write(header_file)
    outfile.close()
