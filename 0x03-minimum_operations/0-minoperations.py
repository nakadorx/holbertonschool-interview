#!/usr/bin/python3
"""holberton python interview
"""


def minOperations(n):
    """minOperations
    """
    if not isinstance(n, int) or n <= 1:
        return 0
    res = 0
    i = 2
    while n > 1:
        if n % i == 0:
            res += i
            n /= i
        else:
            i += 1
    return res
