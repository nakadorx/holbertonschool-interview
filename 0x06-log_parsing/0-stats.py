
#!/usr/bin/python3
"""holbb"""


import sys

i = 0
lis = ['200', '301', '400', '401', '403', '404', '405', '500']
su = 0
new = [0, 0, 0, 0, 0, 0, 0, 0]

try:
    for line in sys.stdin:
        s = line.split()
        if len(s) > 2:
            if s[-2] in lis:
                x = lis.index(s[-2])
                new[x] = new[x] + 1
            i += 1
            su = su + int(s[-1])
        if i == 10:
            i = 0
            print("File size: {}".format(su))
            for x in range(8):
                if new[x] != 0:
                    print('{}: {}'.format(lis[x], new[x]))
except Exception:
    pass
finally:
    print("File size: {}".format(su))
    for x in range(8):
        if new[x] != 0:
            print("{}: {}".format(lis[x], new[x]))