from cmsis_svd.parser import SVDParser
from string import Template
import pprint

nl = "\n"
tab = "\t"


def get_periph_size(peripheral):
    reg_offs = []
    for register in periph.registers:
        reg_offs.append(register.address_offset // 4)
    reg_offs.sort()
    size = reg_offs[-1] + 1
    return size


def generate_register_definition(peripheral):
    code = ""
    reg_defs = []
    for register in peripheral.registers:
        reg_defs.append(
            (
                register.address_offset // 4,
                f"/*{register.description.replace(nl,' ').replace(tab,' ')}*/\ndev_reg {register.name};",
            )
        )
    reg_defs.sort()
    res_count = 0
    code += reg_defs[0][1] + "\n"
    for d in range(1, len(reg_defs)):
        if reg_defs[d][0] - reg_defs[d - 1][0] != 1:
            g = reg_defs[d][0] - reg_defs[d - 1][0] - 1
            code += f"uint32_t RESERVED{res_count}[{g}];\n"
            res_count += 1
            code += reg_defs[d][1] + "\n"
        else:
            code += reg_defs[d][1] + "\n"
    return code


def generate_enum_definitions(peripheral):
    code = ""
    for register in peripheral.registers:
        print(register.name)
        fs = [f.bit_width for f in register.fields]
        if min(fs) < 8:
            code += f"enum class {register.name} : uint32_t{{"
            for field in register.fields:
                name = field.name
                width = field.bit_width
                offset = field.bit_offset
                if width < 8:
                    print(f"{register.name}::{name}, w:{width}, off:{offset}")
                    if width == 1:
                        v = 1 << offset
                        code += f"{name} = {v:#010x},"
                    else:
                        values = [i for i in range(1, 2 ** width)]
                        pprint.pprint(values)
                        for val in values:
                            v = val << offset
                            code += f"{name}_{val:0{width}b} = {v:#010x},"
            code += "};\n"
    return code


parser = SVDParser.for_xml_file("STM32F412.svd")
device = parser.get_device()
peripherals = device.peripherals


for periph in peripherals:
    print(periph.name)
    outfile = open(f"./out/{periph.name}.h", "a")
    h_file_template = open("header_periph_template.txt", "r").read()
    template_data = {
        "name": periph.name,
        "size": get_periph_size(periph),
        "register_definitions": generate_register_definition(periph),
        "enum_definitions": generate_enum_definitions(periph),
    }
    a = Template(h_file_template).substitute(template_data)
    outfile.write(a)
    outfile.close()
