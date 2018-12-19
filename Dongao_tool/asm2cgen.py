#coding=utf-8
import re
import sys
import os

def traverse_dir(dir):
    for root, dirs, files in os.walk(dir):
        #print root
        for file in files:
            if file.endswith(".lst"):
                deal_lst(os.path.join(root, file))
            if file.endswith(".AsmFunName"):
                deal_asm(os.path.join(root, file))

def deal_lst(lst_path):
    with open(lst_path) as f:
        for line in f:
            obj_set.add(line.strip())

def deal_asm(asm_path):
    with open(asm_path) as f:
        for line in f:
            #print "add asm:", line
            func_set.add(line.strip())

def deal_obj():
    for obj_path in obj_set:
        obj_echo_path = obj_path + ".echo"
        if not os.path.exists(obj_echo_path):
            print "not exist file:\n",obj_echo_path
            continue
        with open(obj_echo_path) as f:
            buffer = f.read()
            c_path_list = re.findall("(?<= )[\w/]+\.c", buffer)
            h_path_list = re.findall("-I[\w/]+(?= )", buffer)

            #print obj_echo_path
            for line in c_path_list:
                source_set.add(line.strip())
                #print "\t", line.strip()
            for line in h_path_list:
                #print "\t", line.strip()
                header_set.add(line.strip())


def invoke_producer(pe_path, result_path):
    "pe_path test3.c -- \
    -I/home/john/workspace/EDK2/edk2-UDK2017/MdePkg/Include \
    -I/home/john/workspace/EDK2/edk2-UDK2017/MdePkg/Include/X64 \
    -I/home/john/workspace/EDK2/edk2-UDK2017/IntelFrameworkModulePkg/Include \
    -I/home/john/workspace/EDK2/edk2-UDK2017/MdeModulePkg/Include \
     -asmfunc xxx xxx xxx -result xxxx.c"
    command = pe_path
    if len(source_set) == 0:
        if len(func_set) != 0:
            template = "VOID EFIAPI func_name(VOID){}"
            real_path = os.path.abspath(result_path)
            dir_name = os.path.dirname(real_path)
            if not os.path.exists(dir_name):
                os.makedirs(dir_name)
            with open(real_path,"w+") as f:
                for func in func_set:
                    f.write(template.replace("func_name", func)+"\n")
        return
    for line in source_set:
        command += (" " + line)
        # print line
    command += " --"
    command += tag
    for line in header_set:
        command += (" " + line)
    command += " -asmfunc"
    for line in func_set:
        command += (" " + line)
    command += (" -result" + " " + result_path)
    print command
    os.system(command)

obj_set = set()
func_set = set()
header_set = set()
source_set = set()
log_path = os.path.abspath(os.path.dirname(sys.argv[0]))+os.path.sep+"log"
log = open(log_path,"w")
pe_path = os.path.abspath(os.path.dirname(sys.argv[0]))+os.path.sep+"c_gen"
tag = r' -include AutoGen.h -m64 "-DEFIAPI=__attribute__((ms_abi))" '

if len(sys.argv) != 3:
    print "the argurement should be EDK2 output dir and expected result path"
    print "for example: python asm2cgen.py OUTPUT result.c"
    sys.exit()
output_dir = sys.argv[1]
result_path = sys.argv[2]
log.write("deal with:"+output_dir+"\n")
traverse_dir(output_dir)
if len(func_set) == 0:
    sys.exit()
log.write("source file:\n")
for line in source_set:
    log.write("\t"+line+"\n")
log.write("header file:\n")
for line in header_set:
    log.write("\t" + line + "\n")
log.write("func list:\n")
for line in func_set:
    log.write("\t" + line + "\n")
log.write("obj list:\n")
for line in obj_set:
    log.write("\t" + line + "\n")

if len(obj_set) > 0:
    deal_obj()
invoke_producer(pe_path, result_path)
log.close()





