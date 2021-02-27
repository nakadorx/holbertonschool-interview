#!/usr/bin/python3
"""
holb
"""

import sys

fullSize = 0
x = 0
STATUS = {'200': 0,
          '301': 0,
          '400': 0,
          '401': 0,
          '403': 0,
          '404': 0,
          '405': 0,
          '500': 0}
try:
    for argument in sys.stdin:
        arg = argument.split(" ")
        if len(arg) > 2:
            status = arg[-2]
            fileSize = int(arg[-1])
            if status in STATUS:
                STATUS[status] += 1
            fullSize += fileSize
            x += 1
            if x == 10:
                print("File size: {:d}".format(fullSize))
                for k, validUTF8 in sorted(STATUS.items()):
                    if validUTF8 != 0:
                        print("{}: {:d}".format(k, validUTF8))
                x = 0
except KeyboardInterrupt:
    pass
finally:
    print("File size: {:d}".format(fullSize))
    for k, v in sorted(STATUS.items()):
        if v != 0:
            print("{}: {:d}".format(k, v))
