import os
from collections import OrderedDict


class FileBuffer(object):
    def __init__(self, path):
        self.file = open(path, "rb")
        self.count = -1
    def ReadLine(self):
        self.count += 1
        return self.file.readline()

    def NextLine(self):
        pos = self.file.tell()
        line = self.file.readline()
        self.file.seek(pos)
        return line

    def Close(self):
        self.file.close()

    def IsEnd(self):
        line = self.NextLine()
        if len(line) == 0:
            return True
        return False

    def __del__(self):
        self.file.close()

class FileRewriter(object):

    class Change(object):
        BEFORE, OVERWRITE, AFTER = range(3)
        def __init__(self,lineno, type, content):
            self.lineno = lineno
            #type is FileRewriter.BEFORE
            self.type = type
            self.content = content

    def __init__(self, path):

        with open(path, "rb") as f:
            self.content = f.readlines()
        self.change = {}

    def addChange(self, lineno, type, content):
        Change = FileRewriter.Change
        if lineno not in self.change:
            self.change[lineno] = []
        self.change[lineno].append(Change(lineno, type, content))

    def InsertAfter(self, lineno, content):
        self.addChange(lineno, FileRewriter.Change.AFTER, content)
    def InsertBefore(self, lineno ,content):
        self.addChange(lineno, FileRewriter.Change.BEFORE, content)
    def OverWrite(self,lineno, content):
        self.addChange(lineno, FileRewriter.Change.OVERWRITE, content)

    def Write(self, path):
        Change = FileRewriter.Change
        with open(path, "wb") as f:
            i = -1
            for line in self.content:
                i += 1
                if i not in self.change:
                    f.write(line)
                    continue
                change_list = self.change[i]
                change_dict = {Change.BEFORE:[],Change.OVERWRITE:[line],Change.AFTER:[]}
                for c in change_list:
                    change_dict[c.type].append(c.content)
                for c in change_dict[Change.BEFORE]:
                    f.write(c)
                for c in change_dict[Change.OVERWRITE]:
                    line = c
                f.write(line)
                for c in change_dict[Change.AFTER]:
                    f.write(c)
class Line(str):
    def __new__(cls, value, *args, **kwargs):
        obj = super(Line, cls).__new__(cls, value)
        return obj
    def __init__(self,value, lineno):
        self.lineno = lineno



def testsort():
    l = [1, 2, 2, 1]
    l.sort()
    print l
def test():
    pass