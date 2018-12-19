import re
import sys
import os
import shutil
import subprocess
import StringIO
import argparse
DEBUG_PATH = "DEBUG"
OUTPUT_PATH = "OUTPUT"
SRC_PATH = "src.echo"
INC_PATH = "inc.echo"
LIB_PATH = "static_library_files.lst"

def get_lib_module_dir(lib_path):
    module_list = []

    with open(lib_path) as f:
        for line in f:
            temp = line.strip()
            temp = os.path.join(temp, os.pardir)
            temp = os.path.join(temp, os.pardir)
            temp = os.path.abspath(temp)
            module_list.append(temp)
            if not os.path.exists(temp):
                print "warning: not exists module dir {0}".format(temp)
    return module_list

def deal_lib(module_dir, module_dir_set):
    #recursively get all dependent module
    lib_path = os.path.join(module_dir, OUTPUT_PATH)
    lib_path = os.path.join(lib_path, LIB_PATH)
    if not os.path.exists(lib_path):
        return
    module_list = get_lib_module_dir(lib_path)
    for dir in module_list:
        if dir not in module_dir_set:
            dir = os.path.normpath(dir)
            module_dir_set.add(dir)
            deal_lib(dir, module_dir_set)
def produce_result(temp_dir, module_dir, src_list, inc_list , entry_module = False):
    #fixme to refactor
    module_name = os.path.basename(module_dir)
    print "deal module:{0}\n".format(module_dir)
    header_path = os.path.join(temp_dir, module_name + ".h")
    info_path = os.path.join(temp_dir, module_name + ".info")
    debug_dir = os.path.join(module_dir, DEBUG_PATH)
    warning_path = os.path.join(temp_dir, module_name+".warning")
    flag = get_flag(src_list, inc_list)

    cur_dir = os.path.abspath(os.curdir)
    os.chdir(debug_dir)
    other_flag = ""
    if entry_module:
        other_flag = "-entrymodule"
    invoke_producer(args.pe_path, flag, header_path, info_path, args.callgraph_path, warning_path, other_flag)
    os.chdir(cur_dir)
def merge_lib_src_inc(module_dir_set, src_list, inc_list):
    for module_dir in module_dir_set:
        debug_dir = os.path.join(module_dir, DEBUG_PATH)
        module_src = get_src_list(os.path.join(debug_dir, SRC_PATH))
        for src in module_src:
            if src not in src_list: src_list.append(src)
        module_inc = get_inc_list(os.path.join(debug_dir, INC_PATH))
        for inc in module_inc:
            if inc.endswith("/DEBUG"): continue
            if inc not in inc_list: inc_list.append(inc)
    return src_list, inc_list

def get_inc_list(inc_echo_path):
    inc_list = []
    with open(inc_echo_path) as f:
        for line in f:
            line = line.strip()
            incs = line.split("-I")
            for inc in incs:
                inc = inc.strip()
                if inc not in inc_list:
                    inc_list.append(inc)
    return inc_list
def get_src_list(src_echo_path):
    #return src file list
    src_list = []
    with open(src_echo_path) as f:
        for line in f:
            line = line.strip()
            if line not in src_list:
                src_list.append(line)

    return src_list

def deal_command_flag(debug_dir):
    #fixme to delete
    """procude flag like: Ps2Keyboard.c Ps2KbdCtrller.c ComponentName.c Ps2KbdTextIn.c -- $(FLAG) """
    #return flag and is_empty which will be true if the src_name is empty.
    result = ""
    src_set = set()
    with open(os.path.join(debug_dir, SRC_PATH)) as f:
        for line in f:
            src_set.add(line.strip())
    if len(src_set) == 0:
        return result, True
    result = " " + " ".join(src_set)
    result += (' -- -include AutoGen.h "-DEFIAPI=__attribute__((ms_abi))" -w')


    with open(os.path.join(debug_dir, INC_PATH)) as f:
        for line in f:
            result += (" "+line.strip())
    return result, False

def get_flag(src_list,inc_list):
    """procude flag like: Ps2Keyboard.c Ps2KbdCtrller.c ComponentName.c Ps2KbdTextIn.c -- $(FLAG) """
    src = " ".join(src_list)
    inc = " ".join([("-I"+inc) for inc in inc_list])
    return '{0} -- -include AutoGen.h "-DEFIAPI=__attribute__((ms_abi))" -w {1}'.format(src, inc)


def invoke_producer(pe_path, flag, header_path, info_path, callgraph_path, warning_path, other_flag=""):

    command = "{0} {1} -header {2} -info {3}  -callgraph {4}  -warning {5} {6} 1>/dev/null 2>/dev/null".format(pe_path, flag, header_path, info_path, callgraph_path, warning_path, other_flag)

    cur_dir = os.path.abspath(os.curdir)
    print "workdir:{0}".format(cur_dir)
    #print "command:{0}".format(command)
    print "header:{0}\ninfo:{1}".format(header_path,info_path)
    print command
    status = os.system(command)
    if status != 0:
        print "error in executing interface_gen,exit interface_gen.py"
        sys.exit(status)

def write_info_file(info_path,info_dict):
    # for info_dict,key is guid,value is protocol set
    if os.path.exists(info_path):
        print "warning:already exist header file:{0}".format(info_path)
        os.remove(info_path)

    p1 = "[Protocol.Interface.names]"
    p2 = "[Protocol.Interface.StructureNames.{0}]"
    p3 = "[Protocol.Interface.depends]"
    with open(info_path, "w") as f:
        if not info_dict:
            return
        if "depends" in info_dict:
            value = info_dict.pop("depends")
            f.write(p3+"\n")
            for protocol in value:
                f.write(protocol+"\n")
            f.write("\n")
        f.write(p1+"\n")
        for key in info_dict:
            f.write(key+"\n")
        f.write("\n")
        for key, value in info_dict.iteritems():
            f.write(p2.format(key)+"\n")
            for protocol in value:
                f.write(protocol+"\n")
            f.write("\n")

def append_system_call_info(file,system_call_dict):
    array = "void *TypeInfoList_{0}[] = "
    element = "&TypeInfo__{0}"
    for key in system_call_dict:
        file.write(array.format(key)+"{\n")
        for guid in system_call_dict[key]:
            file.write("  "+element.format(guid)+",\n")
        file.write("  NULL\n};\n")

def read_until_line(reader, start):
    buffer = StringIO.StringIO()
    cur = reader.tell()
    line = reader.readline()
    while not line.startswith(start) and line:
        buffer.write(line)
        cur = reader.tell()
        line = reader.readline()
    reader.seek(cur, 0)
    return buffer.getvalue()

def try_next_line(reader):
    cur = reader.tell()
    line = reader.readline()
    reader.seek(cur, 0)
    return line

def merge(temp_dir,header_path,info_path):
    header_set = set()
    header = StringIO.StringIO()
    system_call_dict = {}
    system_call = ""
    info_list = []
    info = StringIO.StringIO()
    warning = StringIO.StringIO()
    null_GUID_list = []
    null_GUID_dict = {}
    state = 0 #0 for ignore repeated type,1 for write type,2 for null guid,3 for systemcall
    for filename in os.listdir(temp_dir):
        path = os.path.join(temp_dir, filename)
        if filename.endswith(".info"):

            with open(path) as f:
                line = " "
                while line:
                    line = try_next_line(f)
                    line = line.rstrip()
                    cur_type = ""
                    while line.startswith("//"):
                        line = f.readline()
                        line = line.strip()
                        if line.startswith("//TYPE"):
                            type_name = line.split(":")[1]
                            cur_type = type_name
                            cur_io = info
                            state = 1
                        elif line.startswith("//NULL_GUID"):
                            if cur_type not in null_GUID_dict:
                                null_GUID_dict[cur_type] = StringIO.StringIO()
                            state = 2
                        elif line.startswith("//SYSTEM_CALL"):
                            system_call = line.split(":")[1].strip()
                            if system_call not in system_call_dict:
                                system_call_dict[system_call] = set()
                            state = 3
                        line = try_next_line(f)
                    if state == 3:
                        line = try_next_line(f)
                        while not line.startswith("//"):
                            line = f.readline()
                            line = line.strip()
                            if line:
                                system_call_dict[system_call].add(line)
                            line = try_next_line(f)

                    if not cur_type:
                        continue
                    if cur_type in info_list:
                        state = 0
                    if state == 2 and cur_type in null_GUID_list:
                        state = 0
                    if state == 0:
                        read_until_line(f, "//")
                    elif state == 1:
                        info_list.append(cur_type)
                        info.write(read_until_line(f, "//"))
                    elif state == 2:
                        null_GUID_list.append(cur_type)
                        null_GUID_dict[cur_type].write(read_until_line(f, "//"))

        if filename.endswith(".warning"):
            with open(path) as f:
                content = f.read()
                warning.write(content+"\n")

                        
        if filename == "{0}.h".format(args.module_name):
            with open(path) as f:
                for line in f:
                    line = line.strip()
                    if line not in header_set:
                        header_set.add(line)
                        header.write(line+"\n")

    #append null_guid
    for key in null_GUID_dict:
        if key not in info_list:
            info.write(null_GUID_dict[key].getvalue())
    append_system_call_info(info, system_call_dict)
    if os.path.exists(header_path):
        print "warning:already exist header file:{0}".format(header_path)
        os.remove(header_path)
    with open(header_path, "w") as f:
        f.write(header.getvalue())


    if os.path.exists(info_path):
        print "warning:already exist header file:{0}".format(info_path)
        os.remove(info_path)
    
    with open(info_path, "w") as f:
        f.write(info.getvalue())
        if len(info_list) > 0:
            info_list.pop(0)
        f.write("\n\n")
        f.write("void *TypeInfoList[] = {\n")
        for type in info_list:
            f.write("  &TypeInfo__{0},\n".format(type))
        f.write("  NULL\n};")

    warning_path = os.path.dirname(os.path.abspath(header_path))
    warning_name = os.path.basename(header_path)
    warning_name, ext = os.path.splitext(warning_name)
    warning_name = warning_name + ".warning"
    warning_path = os.path.join(warning_path, warning_name)
    with open(warning_path, "w") as f:
        f.write(warning.getvalue())


def main():
    parser = argparse.ArgumentParser()
    #parser.add_argument("pe_path", help="the path of interface_gen which produce info and header file")
    parser.add_argument("module_dir", help="the path of module which contains DEBUG dir")
    parser.add_argument("header_path", help="path to generate header file")
    parser.add_argument("info_path", help="path to generate info file")
    parser.add_argument("callgraph_path", help="the path of callgraph which will be used to filter source code")
    parser.add_argument("warn_path", help="path to generate warning file")
    parser.add_argument("search_path", help="path to generate file of header search path")
    global args
    args = parser.parse_args()
    args.pe_path = os.path.abspath(os.path.dirname(sys.argv[0]))+os.path.sep+"interface_gen"

    args.module_dir = os.path.abspath(os.path.normpath(args.module_dir))
    args.module_name = os.path.basename(args.module_dir)
    debug_dir = os.path.join(args.module_dir, DEBUG_PATH)
    temp_dir = os.path.join(args.module_dir, args.module_name+"_interfacegen_temp")
    print "module_dir:{0}\n".format(args.module_dir)
    print "module_name:{0}\n".format(args.module_name)
    if os.path.exists(temp_dir):
        print 'warning: already exist dir "{0}"'.format(temp_dir)
        shutil.rmtree(temp_dir)

    os.mkdir(temp_dir)
    module_dir_set = set()
    deal_lib(args.module_dir, module_dir_set)
    src_list = get_src_list(os.path.join(debug_dir, SRC_PATH))
    inc_list = get_inc_list(os.path.join(debug_dir, INC_PATH))
    merge_lib_src_inc(module_dir_set, src_list, inc_list)
    with open(os.path.join(debug_dir, args.search_path), "w") as f:
        f.writelines(["-I{0}\n".format(inc) for inc in inc_list if len(inc)>0])
    #def invoke_producer(pe_path, flag, header_path, info_path, callgraph_path, warning_path, other_flag=""
    produce_result(temp_dir, args.module_dir, src_list, inc_list, True)
    merge(temp_dir, args.header_path, args.info_path)
    #shutil.rmtree(temp_dir)
args = None
main()
