import argparse
import sys
import os
from edk2_module import Edk2ModuleDir
from edk2_module import RunCommand


def get_flag(module):
    """procude flag like: Ps2Keyboard.c -- -include AutoGen.h "-DEFIAPI=__attribute__((ms_abi))" -w  -Isearchpath"""
    flag = []
    flag.extend(module.gen_uncomment_src())
    flag.extend(["--"])
    flag.extend(module.get_preprocess_flag())
    return flag

def invoke_func_gen(args):

    module = Edk2ModuleDir(args.module_dir)
    flag_list = get_flag(module)

    cmd = [PE_PATH]
    cmd.extend(flag_list)
    cmd.extend(["-header", args.header_path])
    cmd.extend(["-info", args.info_path])
    cmd.extend(["-warning", args.warn_path])
    cmd.extend(["-module", "EFI_"+module.module_name])
    if args.peach is not None:
        cmd.extend(["-peach", args.peach])
    RunCommand(None, *cmd)

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("module_dir", help="the path of module which contains DEBUG dir")
    parser.add_argument("header_path", help="path to generate header file")
    parser.add_argument("info_path", help="path to generate info file")
    parser.add_argument("warn_path", help="path to generate warning file")
    parser.add_argument("--peach",help="peach datamodel path")
    args = parser.parse_args()
    PE_PATH = args.pe_path = os.path.abspath(os.path.dirname(sys.argv[0]))+os.path.sep+"function_gen"
    invoke_func_gen(args)

