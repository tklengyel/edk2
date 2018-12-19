import sys
import re
import os
from edk2_module import RunCommand
#match {path}
regex = re.compile(br"^\{([^\{\}]+)\}$")
def convert_command(args):
    result = []
    for arg in args:
        m = regex.match(arg)
        if m is None:
            result.append(arg)
        else:
            path = m.group(1)
            with open(path) as f:
                for line in f:
                    line = line.strip()
                    result.append(line)
    return result

if __name__ == "__main__":
    cmd = convert_command(sys.argv[1:])
    try:
        RunCommand(os.curdir, *cmd)
    except ValueError as e:
        print "error in run command:\n{0}\n".format(" ".join(cmd))
        print e
        exit(1)