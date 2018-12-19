import sys
import os
import subprocess
from MyUtil import FileBuffer
import ConfigParser
DEBUG = 1
def DEBUGInfo(msg, level):
    if level<= DEBUG:
        print msg

def Dequote(string):
    if len(string)<2:
        return string
    if string[0] == b"\"" and string[-1] == b"\"":
        return string[1:-1]
    return string

def RunCommand(WorkDir=None, *Args):
    if WorkDir is None:
        WorkDir = os.curdir
    DEBUGInfo("run command:{0}".format(" ".join(Args)), 1)
    #return "FAKE RUNCOMMAND"
    CurDir = os.path.abspath(os.path.curdir)
    os.chdir(WorkDir)
    p = subprocess.Popen(Args, stderr=subprocess.PIPE, stdout=subprocess.PIPE)

    stdout, stderr = p.communicate()
    DEBUGInfo("stdout:{0}".format(stdout), 2)
    DEBUGInfo("stderr:{0}".format(stderr), 2)
    os.chdir(CurDir)
    if p.returncode != 0:
        raise ValueError(stderr)
    return "stdout:{0} \n stderr:{1}".format(stdout, stderr)


class Makefile(object):
    def __init__(self, path):
        self.macro = self._parse(FileBuffer(path))

    def _parse(self, fb):
        macro = {}
        while not fb.IsEnd():
            line = fb.ReadLine().strip()
            if len(line) == 0: continue
            if line.startswith("#"): continue
            i = line.find("=")
            if i == -1:
                continue
            key = line[:i]
            value = line[i+1:]
            key = key.strip()
            value = value.strip()
            while value.endswith("\\"):
                line = fb.ReadLine().strip()
                value = value[:-1] + line
            macro[key] = value
        return macro

    def GetInf(self):
        return os.path.join(self.macro["MODULE_DIR"], self.macro["MODULE_FILE"])

class Symbol(object):
    def __init__(self, name, file ,line):
        self.name = name
        self.file = file
        self.lineno = line

    def __str__(self):
        return self.name
    def __eq__(self, other):
        return self.name.__eq__(other.name)
    def __hash__(self):
        return self.name.__hash__()

class Function(Symbol):
    pass
class Var(Symbol):
    pass

class GlobalSymbol(object):
    def __init__(self, prefix, path):
        func_map = {}
        var_map = {}
        parser = ConfigParser.ConfigParser()
        if not os.path.exists(path):
            raise IOError("not find the file {0}".format(path))
        parser.read(path)
        for key,value in parser.items("Function"):
            #key is symbol, value is file|line
            (file,line) = value.split("|")
            file = os.path.join(prefix, file)
            file = os.path.abspath(file)
            file = os.path.normpath(file)
            if file not in func_map:
                func_map[file] = set()
            func_map[file].add(Function(key,file,line))

        for key, value in parser.items("GlobalVar"):
            #key is symbol, value is file|line
            (file,line) = value.split("|")
            file = os.path.join(prefix, file)
            file = os.path.abspath(file)
            file = os.path.normpath(file)
            if file not in var_map:
                var_map[file] = set()
            var_map[file].add(Var(key, file, line))
        self.func_map = func_map
        self.var_map = var_map




class CallGraph(object):
    def __init__(self, prefix, path):
        #key is source file path , value is set of used function
        self.call_map = self.ParseFile(prefix, path)

    def ParseFile(self, prefix, path):
        call_map = {}
        with open(path, "rb") as f:
            for line in f:
                line = line.strip()
                if len(line) == 0: continue
                temp = line.split(b"->")
                func_name = Dequote(temp[0].strip())
                file = Dequote(temp[1].strip())
                temp = file.split(b"|")[0].strip()
                src_path = temp.split(b" ")[0].strip()
                lineno = temp.split(b" ")[1].strip()
                path = os.path.join(prefix, src_path)
                path = os.path.abspath(path)
                path = os.path.normpath(path)
                func = Function(func_name,path,lineno)
                if path not in call_map:
                    call_map[path] = set()
                call_map[path].add(func)
        return call_map

class Edk2ModuleDir(object):
    DEBUG_PATH = "DEBUG"
    OUTPUT_PATH = "OUTPUT"
    SRC_PATH = "DEBUG{0}src.echo".format(os.path.sep)
    INC_PATH = "DEBUG{0}inc.echo".format(os.path.sep)
    LIB_PATH = "OUTPUT{0}static_library_files.lst".format(os.path.sep)
    FLAG_PATH = "DEBUG{0}cc_flags.echo".format(os.path.sep)
    CC_PATH = "DEBUG{0}cc.echo".format(os.path.sep)
    CALL_GRAPH = "DEBUG{0}llvm-link.dbg".format(os.path.sep)
    LLVM_IR = "DEBUG{0}llvm-IR.ll".format(os.path.sep)
    FULL_CALL_GRAPH = "DEBUG{0}full_callgraph.dbg".format(os.path.sep)

    def __init__(self, module_path):
        self.module_path = os.path.abspath(module_path)
        self.module_name = os.path.basename(self.module_path)
        self.src_list = None
        self.lib_list = None
        self.makefile = None

    def get_inf_path(self):
        if self.makefile:
            return self.makefile.GetInf()
        path = os.path.join(self.module_path, "GNUmakefile")
        if not os.path.exists(path):
            path = os.path.join(self.module_path, "Makefile")
        if not os.path.exists(path):
            print "not find makefile of this module {0}".format(self.module_path)
            exit(1)
        self.makefile = Makefile(path)
        return self.makefile.GetInf()

    def get_full_callgraph(self):
        return os.path.join(self.module_path, Edk2ModuleDir.FULL_CALL_GRAPH)
    def get_callgraph(self):
        return os.path.join(self.module_path, Edk2ModuleDir.CALL_GRAPH)
    def get_preprocess_flag(self):
        # produce flag like: -include AutoGen.h "-DEFIAPI=__attribute__((ms_abi))
        flag = []
        cc_flag = self.get_cc_flag()
        state = 0  # 0 for abandon ,1 for pick
        for f in cc_flag:
            if f.startswith("-"):
                if f in ["-D", "-include"]:
                    state = 1
                    flag.append(f)
                elif f.startswith("-D"):
                    flag.append(f)
                else:
                    state = 0
            elif state == 1:
                flag.append(f)
        flag.extend(["-I{0}".format(inc) for inc in self.get_inc()])
        return flag

    def gen_uncomment_src(self, dirname="uncomment_src"):
        temp_dir = os.path.join(self.module_path, self.DEBUG_PATH)
        temp_dir = os.path.join(temp_dir, dirname)
        if not os.path.exists(temp_dir):
            os.mkdir(temp_dir)
        src_list = []
        for src in self.get_src():
            name = os.path.basename(src)
            target_path = os.path.join(temp_dir, name)
            cmd = ["gcc", "-fpreprocessed", "-dD", "-P", "-E", src, "-o", target_path]
            RunCommand(None, *cmd)
            src_list.append(target_path)
        return src_list

    def gen_preprocessed_src(self, dirname="preprocessed_src"):
        #parameter dirname  create dir in DEBUG_PATH
        #return  preprocessed src list
        temp_dir = os.path.join(self.module_path, self.DEBUG_PATH)
        temp_dir = os.path.join(temp_dir, dirname)
        if not os.path.exists(temp_dir):
            os.mkdir(temp_dir)
        src_list = []
        for src in self.get_src():
            name = os.path.basename(src)
            target_path = os.path.join(temp_dir, name)
            cmd = []
            cmd.append(self.get_cc())
            cmd.extend(self.get_preprocess_flag())
            cmd.extend(["-E", src, "-o", target_path])
            RunCommand(None, *cmd)
            src_list.append(target_path)
        return src_list

    def get_inc(self):
        path = os.path.join(self.module_path, Edk2ModuleDir.INC_PATH)
        inc_list = []
        with open(path) as f:
            for line in f:
                line = line.strip()
                incs = line.split("-I")
                for inc in incs:
                    inc = inc.strip()
                    if inc and inc not in inc_list:
                        inc_list.append(inc)
        return inc_list

    def get_cc(self):
        path = os.path.join(self.module_path, Edk2ModuleDir.CC_PATH)
        with open(path) as f:
            cc = f.read().strip()

            return cc.strip("\"\'")

    def get_inc_without_DEBUG(self):
        inc_list = self.get_inc()
        return [inc for inc in inc_list if not inc.endswith("/DEBUG")]

    def get_cc_flag(self):
        path = os.path.join(self.module_path, Edk2ModuleDir.FLAG_PATH)
        flag = []
        with open(path) as f:
            for line in f:
                line = line.strip()
                flag.extend(line.split(" "))

        return [f.strip("\"\'\n \t") for f in flag]

    def get_src_without_AUTOGEN(self):
        src_list = self.get_src()
        result = []
        for src in src_list:
            name = os.path.basename(src)
            if name == "AutoGen.c": continue
            result.append(src)
        return result

    def get_src(self):
        if self.src_list:
            return self.src_list
        path = os.path.join(self.module_path, Edk2ModuleDir.SRC_PATH)
        src_list = []
        with open(path) as f:
            for line in f:
                line = line.strip()
                if line not in src_list:
                    src_list.append(line)
        self.src_list = src_list
        return self.src_list

    def get_lib(self):
        if self.lib_list:
            return self.lib_list
        path = os.path.join(self.module_path, Edk2ModuleDir.LIB_PATH)
        module_list = []
        if not os.path.exists(path):
            return module_list
        with open(path) as f:
            for line in f:
                temp = line.strip()
                temp = os.path.join(temp, os.pardir)
                temp = os.path.join(temp, os.pardir)
                temp = os.path.normpath(temp)
                module_list.append(temp)
                if not os.path.exists(temp):
                    print "warning: not exists module dir {0}".format(temp)
        self.lib_list = module_list
        return self.lib_list
    def get_arch(self):
        return self.makefile.macro["ARCH"]
    def in_module(self, src_file):
        #check whether the src_file belong to this module,both should be absolute path
        src_list = self.get_src()
        src_list = [os.path.normpath(x) for x in src_list]
        src_file = os.path.normpath(src_file)
        return src_file in src_list
    def __hash__(self):
        return hash(self.module_path)
    def __eq__(self, other):
        return self.module_path == other.module_path
    def __str__(self):
        return self.module_path

class Edk2ModuleDep(object):
    #recursively search static lib and combine into a module set
    def __init__(self, entry_module):
        #entry EDK2 module
        self.entry_module = entry_module
        #dependent module
        self.module_set = set()
        self._search_module(self.entry_module, self.module_set)
        if self.entry_module in self.module_set:
            self.module_set.remove(self.entry_module)
        print "module_dir:"
        for dir in self.module_set:
            print dir
        print "module_dir_finish"

    def _search_module(self, module, module_set):
        for dir in module.get_lib():

            lib = Edk2ModuleDir(dir)
            if lib not in module_set:

                module_set.add(lib)
                self._search_module(lib, module_set)


    def get_all_inc(self):
        inc_list = self.entry_module.get_inc()
        for module in self.module_set:
            for inc in module.get_inc_without_DEBUG():
                if inc not in inc_list:
                    inc_list.append(inc)
        return inc_list

    def get_all_src(self):
        src_list = self.entry_module.get_src()
        for module in self.module_set:
            for src in module.get_src():
                if src not in src_list:
                    src_list.append(src)
        return src_list

if __name__ == "__main__":
    path = r"Y:\share\edk2\Build\Ovmf3264\NOOPT_CLANGTOOL38\X64\IntelFrameworkModulePkg\Bus\Isa\Ps2KeyboardDxe\Ps2keyboardDxe"
    module = Edk2ModuleDir(path)
    gs = GlobalSymbol("PRE",module.get_callgraph())

