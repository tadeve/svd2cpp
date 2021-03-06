from string import Template
from pprint import pprint
import model

stm32f412 = model.device_from_xml("stm32f412.svd.handmodified", gen_json=False)
stm32f412.generate_lib()
for periph in stm32f412.peripherals:
    # print(periph.name)
    header_file = periph.code()
    outfile = open(f"./out/{stm32f412.name.lower()}_{periph.name.lower()}.h", "a")
    outfile.write(header_file)
    outfile.close()
