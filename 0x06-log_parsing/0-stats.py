
#!/usr/bin/python3
""" holb """


import sys
import re

filesize = 0
status = {}

def print_status(fsize, status_codes):
    """ holb """
    print("File size: {}".format(filesize))
    for key in sorted(status.keys()):
        print("{}: {}".format(key, status[key]))

try:
    for n, line in enumerate(sys.stdin, 1):
        x = len(line) - 1
        while x > 0:
            if line[x] == '\"':
                break
            x -= 1
        listd = line[x + 1:].split()
        if len(listd) > 1:
            filesize += int(listd[1]) if listd[1].isdigit() else 0
            if listd[0].isdigit():
                if listd[0] in status.keys():
                    status[listd[0]] += 1
                else:
                    status[listd[0]] = 1
            if n % 10 == 0:
                print_status(filesize, status)
except KeyboardInterrupt as e:
    print_status(filesize, status)
finally:
    print_status(filesize, status)
