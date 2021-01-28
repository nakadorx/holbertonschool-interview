#!/usr/bin/python3
""" log parsing """


import sys

if __name__ == "__main__":
    def printx(data, status):
        """ print the log """
        print("File size: {}".format(data))
        for k, v in sorted(status.items()):
            if v != 0:
                print("{}: {}".format(k, v))
    counter = 0
    data = 0
    status = {
        "200": 0, "301": 0, "400": 0, "401": 0,
        "403": 0, "404": 0, "405": 0, "500": 0}
    try:
        for line in sys.stdin:
            if not(counter == 10):
                counter = counter + 1

            else:
                printx(data, status)
                counter = 1
            parsed = line.split()
            try:
                data = data + int(parsed[-1])
            except Exception as e:
                pass
            try:
                for k, v in status.items():
                    if k == parsed[-2]:
                        status[k] = status[k] + 1
            except Exception as e:
                pass
        printx(data, status)
    except KeyboardInterrupt as e:
        printx(data, status)
