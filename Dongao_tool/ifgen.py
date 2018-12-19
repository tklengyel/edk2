import argparse
import sys
import os
from edk2_module import Edk2ModuleDir
from edk2_module import RunCommand
from edk2_module import Edk2ModuleDep
def get_flag(module_set):
    flag = []
    flag.extend(module_set.get_all_src())
    flag.extend(["--", "-w", "-include", "AutoGen.h", "-DEFIAPI=__attribute__((ms_abi))"])
    flag.extend(["-I{0}".format(inc) for inc in module_set.get_all_inc()])
    return flag

def invoke_interface_gen(module_dir, header_path, info_path, call_path, warn_path, search_path):
    module = Edk2ModuleDir(module_dir)
    module_set = Edk2ModuleDep(module)

    cmd = [PE_PATH]
    cmd.extend(get_flag(module_set))
    cmd.extend(["-header", header_path])
    cmd.extend(["-info", info_path])
    cmd.extend(["-callgraph", call_path])
    cmd.extend(["-warning", warn_path])
    cmd.extend(["-module", module.module_name])
    cmd.extend([">/dev/null", "2>&1"])
    RunCommand(None, *cmd)
    with open(search_path,"wb") as f:
        f.writelines(["-I{0}\n".format(inc) for inc in module_set.get_all_inc() if len(inc) > 0])

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    # parser.add_argument("pe_path", help="the path of interface_gen which produce info and header file")
    parser.add_argument("module_dir", help="the path of module which contains DEBUG dir")
    parser.add_argument("header_path", help="path to generate header file")
    parser.add_argument("info_path", help="path to generate info file")
    parser.add_argument("callgraph_path", help="the path of callgraph which will be used to filter source code")
    parser.add_argument("warn_path", help="path to generate warning file")
    parser.add_argument("search_path", help="path to generate file of header search path")
    args = parser.parse_args()
    PE_PATH = os.path.abspath(os.path.dirname(sys.argv[0])) + os.path.sep + "interface_gen"

    invoke_interface_gen(args.module_dir, args.header_path, args.info_path,
                         args.callgraph_path, args.warn_path, args.search_path)