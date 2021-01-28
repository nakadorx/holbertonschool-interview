#!/usr/bin/python3
"""holb"""


import sys

cnt = 0
dv = [0, 0, 0, 0, 0, 0, 0, 0]
lx = ['200', '301', '400', '401', '403', '404', '405', '500']
da = 0

try:
    for line in sys.stdin:
        s = line.split()
        if len(s) > 2:
            if s[-2] in lx:
                x = lx.index(s[-2])
                dv[x] = dv[x] + 1
            cnt += 1
            da = da + int(s[-1])
        if cnt == 10:
            cnt = 0
            print("File size: {}".format(da))
            for x in range(8):
                if dv[x] != 0:
                    print('{}: {}'.format(lx[x], dv[x]))
except Exception:
    pass
finally:
    print("File size: {}".format(su))
    for x in range(8):
        if dv[x] != 0:
            print("{}: {}".format(lis[x], dv[x]))
