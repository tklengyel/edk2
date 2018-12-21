import argparse
import sys
import os
from edk2_module import Edk2ModuleDir,Edk2ModuleDep,DEBUGInfo
from edk2_module import RunCommand,CallGraph,GlobalSymbol
import copy
import re
import shutil
from StringIO import StringIO
from MyUtil import FileRewriter, Line, FileBuffer


def TrimWorkspace(path):
    if not os.path.isabs(path):
        print "path {0} is not absolute path".format(path)
        exit(1)
    path = os.path.normpath(path)
    return os.path.relpath(path, args.edk2_path)

def MergeDict(a, b):
    for k in b:
        if k in a:
            PrintDict(a)
            PrintDict(b)
            e = ValueError("conflict dict merge for key {0}".format(k))
            e.conflict = k
            raise e
        a[k] = b[k]

def PrintDict(d):
    for k, v in d.items():
        print "{0}:{1}".format(k, v)

class InfFile(object):
    def __init__(self, path, output):
        self.output = output
        self.path = path
        self.rewriter = FileRewriter(path)
        self._Parse(FileBuffer(path))


    def __str__(self):
        return self.path
    def __hash__(self):
        return hash(self.path)
    def __eq__(self, other):
        return self.path == other.path
    def _IsSection(self, line):
        if len(line) <=2: return False
        if line[0] == "[" and line[-1] == "]":
            return line[1:-1]
        return False

    def _GetKeyValue(self, line):
        i = line.find("=")
        if i == -1:
            return line, None
        key = line[:i]
        value = line[i + 1:]
        key = key.strip()
        value = value.strip()
        return key, value

    def _Parse(self, fb):
        self.section = {}
        sec = None
        i = -1
        for line in fb.file:
            i += 1
            line = line.strip()
            if len(line) == 0:continue
            if line[0] == "#":continue
            if self._IsSection(line):
                sec = self._IsSection(line)
                self.section[sec] = {}
                continue
            k, v = self._GetKeyValue(line)
            v = Line(v, i)
            k = Line(k, i)
            if k not in self.section[sec]:
                self.section[sec][k] = []
            self.section[sec][k].append(v)
        #deal with [sectionA,sectionB]
        key_list = [key for key in self.section]
        for key in key_list:
            if key.find(",") == -1:
                continue
            for k in key.split(","):
                k = k.strip()
                if k in self.section:
                    try:
                        MergeDict(self.section[k], self.section[key])
                    except ValueError as e:

                        self.output.write("\nrepeat content {0} in inf file: {1}\n".format(e.conflict, self.path))
                        log.write("\nrepeat content {0} in inf file: {1}\n".format(e.conflict, self.path))
                        print "exception when parsing {0}".format(self.path)
                        print e.message
                else:
                    self.section[k] = copy.copy(self.section[key])

        fb.Close()

    def GetLibName(self, arch):
        LIB_NAME = "LIBRARY_CLASS"
        value_list = None
        if LIB_NAME in self.section["Defines"]:
            value_list = self.section["Defines"][LIB_NAME]
        if value_list is None:
            if LIB_NAME in self.section["Defines.{0}".format(arch)]:
                value_list = self.section["Defines.{0}".format(arch)][LIB_NAME]
            else:
                raise ValueError("not find lib name of inf {0}".format(self.path))

        return [v.split("|")[0] for v in value_list]

    def ExistPcdSection(self):
        for key in self.section:
            if key.lower().find("pcd") != -1:
                return True
        return False

    def _GetSectionByArch(self, section, arch):
        #return empty dict if not find section
        sec_list = [section, section+".%s"%arch, section+".common"]
        content_dict = {}
        for sec in sec_list:
            if sec in self.section:
                try:
                    MergeDict(content_dict, self.section[sec])
                except ValueError as e:
                    print "exception when merge section of {0}".format(self.path)
                    raise e
        return content_dict

    def GetLib(self, arch):
        tmp = "LibraryClasses"
        lib_list = []
        for sec in [tmp, tmp+".%s"%arch, tmp+".common"]:
            if sec in self.section:
                lib_list.extend([k for k in self.section[sec]])
        return lib_list

    def GetGuid(self, section, arch):
        #section could be Guids,Protocols,Ppis
        tmp = section
        protocol_dict = self._GetSectionByArch(tmp, arch)
        protocol_list = []
        for key in protocol_dict:
            i = key.find("#")
            temp = key
            if i != -1:temp = temp[:i].strip()
            i = key.find("|")
            if i != -1:temp = temp[:i].strip()
            key = Line(temp, key.lineno)
            key = Line(temp, key.lineno)
            protocol_list.append(key)
        return protocol_list


class InfChecker(object):
    def __init__(self, module, edk2_path, output):
        self.edk2_path = edk2_path
        self.module = module
        self.inf = InfFile(module.get_inf_path(), output)
        self.output = output
        #content is Line
        self.del_list = []
    def CheckLib(self):
        warning = self.output
        module = self.module
        if module.module_name.lower() == "secmain":
            print "secmain module can not be checked"
            exit(0)

        module_path_list = module.get_lib()
        module_set = set()
        for path in module_path_list:
            module_set.add(Edk2ModuleDir(path))
        if module in module_set:
            module_set.remove(module)
        callgraph = GlobalSymbol(os.path.join(self.edk2_path, os.path.pardir), module.get_callgraph())

        lib_name_dict = {}  # key is lib name,value is lib(Edk2ModuleDir)
        used_lib_set = set()
        for lib in module_set:
            inf = InfFile(lib.get_inf_path(),self.output)
            name_list = inf.GetLibName(lib.makefile.macro["ARCH"])
            for name in name_list:
                # NULL LIBRARY_CLASS will be used by dsc,not list in inf ,so skip it.
                if name == "NULL":
                    continue
                if name in lib_name_dict:
                    print "duplicated lib name {0} of lib {1}".format(name, lib)
                    PrintDict(lib_name_dict)
                    exit(1)
            lib_name_dict[name] = lib
            for src_path in callgraph.func_map:
                if lib.in_module(src_path):  used_lib_set.add(lib)
            for src_path in callgraph.var_map:
                if lib.in_module(src_path):  used_lib_set.add(lib)

        unused_lib_name = []
        inf = self.inf
        dep_lib_name = inf.GetLib(module.get_arch())
        for name in dep_lib_name:
            if name not in lib_name_dict:
                print "not find lib {0} of module {1}".format(name, module)
                PrintDict(lib_name_dict)
                exit(1)
            lib = lib_name_dict[name]
            if lib not in used_lib_set:
                unused_lib_name.append(name)

        if "PcdLib" in unused_lib_name:
            if inf.ExistPcdSection():
                unused_lib_name.remove("PcdLib")

        unused_lib_list = [lib for lib in module_set if lib not in used_lib_set]

        if len(unused_lib_name) > 0:

            warning.write("\n\nused lib list:\n\n")
            warning.write("\n".join(str(x) for x in used_lib_set))
            warning.write("\n\nredundant lib list:\n\n")
            warning.write("\n".join(str(x) for x in unused_lib_list))
            warning.write("\n\nlib name dict:\n\n")
            warning.write("\n".join("{0}:{1}".format(k, v) for k, v in lib_name_dict.items()))
            warning.write("\n\nredundant lib in inf:\n\n")
            warning.write("\n".join("{0}:{1}".format(x, x.lineno+1) for x in unused_lib_name))


        if len(unused_lib_name) == 0:
            return
        self.del_list.extend(unused_lib_name)

    def Fixup(self):
        rewriter = FileRewriter(self.inf.path)
        for x in self.del_list:
            print "del line {0}:{1}".format(x.lineno+1, x)
            rewriter.OverWrite(x.lineno, "")
        rewriter.Write(self.inf.path)

    def CheckProtocols(self):

        return self._CheckGuid("Protocols")
    def CheckGuids(self):
        return self._CheckGuid("Guids")
    def CheckPpis(self):
        return self._CheckGuid("Ppis")

    def _CheckGuid(self, sec):
        warning = self.output
        #section could be [Guids],[Protocols],[Ppis]
        module = self.module
        inf = self.inf


        guid_list = inf.GetGuid(sec, module.get_arch())
        if len(guid_list) == 0:
            return

        #guid_list = inf.GetProtocol(module.get_arch())
        DEBUGInfo("\nguidlist\n", 1)
        DEBUGInfo("\n".join(guid_list), 1)
        #in IR a global name will be refer in format of @name
        #only use name to match will match unused name
        guid_re = re.compile("|".join("@{0}".format(guid) for guid in guid_list))
        with open(os.path.join(module.module_path, module.LLVM_IR), "rb") as f:
            content = f.read()
            iter = guid_re.finditer(content)
            used_guid_set = set([m.group(0)[1:] for m in iter])
            DEBUGInfo("\nused_guid_set\n", 1)
            DEBUGInfo("\n".join(used_guid_set), 1)
            unused_guid_list = [g for g in guid_list if g not in used_guid_set]
            if len(unused_guid_list) > 0:
                warning.write("\n\nunused guid in {0} of arch {1}:\n\n".format(sec, module.get_arch()))
                warning.write("\n".join("{0}:{1}".format(x, x.lineno+1) for x in unused_guid_list))
                self.del_list.extend(unused_guid_list)


class SymbolChecker(object):
    #compare opt_callgraph and full_callgraph
    #check function and global variable except static.
    #parameter CallGraph
    def __init__(self, module, edk2_path, output):
        self.edk2_path = edk2_path
        self.opt_callgraph = GlobalSymbol(os.path.join(edk2_path, os.path.pardir), module.get_callgraph())
        self.full_callgraph = GlobalSymbol(os.path.join(edk2_path, os.path.pardir), module.get_full_callgraph())
        self.module = module
        self.output = output
    def CheckGlobalVar(self):
        #check global var in thie module, don;t include library.
        warning = self.output
        src_list = self.module.get_src_without_AUTOGEN()
        var_dict = self._CheckGlobalVar(src_list)
        for key in var_dict:
            if len(var_dict[key]) == 0:continue
            warning.write("\n\nunused global variable in {0}:\n".format(key))
            warning.write("\n".join("{0},line {1}".format(f, f.lineno) for f in var_dict[key]))
        return var_dict

    def _CheckGlobalVar(self, src_list = None):
        full_dict = self.full_callgraph.var_map
        opt_dict = self.opt_callgraph.var_map
        if src_list is None:
            src_list = [k for k in full_dict]
        result = {}
        for file in src_list:
            result[file] = []
            if file not in full_dict:
                continue
            if file not in opt_dict:
                result[file].extend(full_dict[file])
                continue
            result[file].extend(f for f in full_dict[file] if f not in opt_dict[file])
        return result

    def CheckFunc(self):
        warning = self.output
        src_list = self.module.get_src_without_AUTOGEN()
        func_dict = self._CheckFunc(src_list)

        for key in func_dict:
            if len(func_dict[key]) == 0:
                continue
            warning.write("\n\ndead code function in {0}:\n".format(key))
            warning.write("\n".join("{0},line {1}".format(f, f.lineno) for f in func_dict[key]))
        return func_dict
    def _CheckFunc(self, src_list=None):
        #return dict, key is file, val is redundant func list
        #Only return function the file of src_list,if src_list is None, it will return all function.
        full_dict = self.full_callgraph.func_map
        opt_dict = self.opt_callgraph.func_map
        if src_list is None:
            src_list = [k for k in full_dict]
        result = {}
        for file in src_list:
            result[file] = []
            if file not in full_dict:
                #log.write("not find file{0} in noopt callgraph of module {1}\n".format(file,self.module))
                #print "src_list"#
                #for key in src_list:
                #    print key
                #print "full_dict"
                #for key in full_dict:
                #    print key
                continue
            if file not in opt_dict:
                result[file].extend(full_dict[file])
                continue
            result[file].extend(f for f in full_dict[file] if f not in opt_dict[file])
        return result


def Run():
    module = Edk2ModuleDir(args.module_dir)
    warning = StringIO()

    checker = InfChecker(module, args.edk2_path,warning)
    checker.CheckLib()
    checker.CheckProtocols()
    checker.CheckPpis()
    checker.CheckGuids()
    symbol_checker = SymbolChecker(module, args.edk2_path,warning)
    func_dict = symbol_checker.CheckFunc()
    var_dict = symbol_checker.CheckGlobalVar()
    content = warning.getvalue()
    if len(content) > 0:
        par_dir = os.path.dirname(args.warn_path)
        if not os.path.exists(par_dir): os.makedirs(par_dir)
        with open(args.warn_path, "wb") as f:
            f.write("module:{0}\n".format(module))
            f.write(content)

    #if args.fixup:
    #    checker.Fixup()

    for src in func_dict:
        if len(func_dict[src]) == 0:
            continue
        log.write("\nDead code function in file: {0}\n".format(TrimWorkspace(src)))
        log.write("\n".join("{0}, line {1}".format(func, func.lineno) for func in func_dict[src]))
        log.write("\n")
    for src in var_dict:
        if len(var_dict[src]) == 0:continue
        log.write("\nUnused global variable in file: {0}\n".format(TrimWorkspace(src)))
        log.write("\n".join("{0}, line {1}".format(var,var.lineno) for var in var_dict[src]))
        log.write("\n")
    if len(checker.del_list) == 0:
        return
    log.write("\nInf redundant definition in file: {0}\n".format(TrimWorkspace(module.get_inf_path())))
    for x in checker.del_list:
        log.write("{0}, line {1}\n".format(x, x.lineno + 1))


def test():
    path = r"C:\wksp_edk2\edk2\MdeModulePkg\Universal\FaultTolerantWriteDxe\FaultTolerantWriteDxe.inf"
    inf = InfFile(path)
    l = inf.GetProtocol("X64")
    print l
    exit(0)
def testarg():
    print args.inf_file
    print args.edk2_path
    print args.module_dir
    print args.warn_path
    print args.fixup
if __name__ == "__main__":

    parser = argparse.ArgumentParser()
    parser.add_argument("inf_file", help="the path of inf file of the module")
    parser.add_argument("edk2_path", help="the path of edk2 root")
    parser.add_argument("module_dir", help="the path of build module which contains DEBUG dir")
    parser.add_argument("warn_path", help="path to generate warning file")
    parser.add_argument("log_path", help="summary log which will be appended when call inf_check.py")
    #parser.add_argument("--fixup", action="store_true", help="fixup content in the inf file,this option will overwrite inf file,Please don't use it")
    args = parser.parse_args()
    log = open(args.log_path, "ab")
    Run()
    log.close()


