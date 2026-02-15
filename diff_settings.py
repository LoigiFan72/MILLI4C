import os

def apply(config, args):
    config["baseimg"] = "tools/disasm/baserom/exefs/code.bin"
    config["myimg"] = "build/us/code.bin"
    config["source_directories"] = ["."]
    config["arch"] = "armel"
    config["arch_objdump"] = "arm"
    config["objdump_executable"] = os.environ.get('DEVKITARM') + "/bin/arm-none-eabi-objdump"