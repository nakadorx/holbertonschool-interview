#!/usr/bin/python3
"""holberton python interview
"""


def minOperations(n):
    """minOperations
    """
    if not isinstance(n, int) or n <= 1:
        return 0
    x = 2
    result = 0
    while n > 1:
        if not(n % x == 0):
            x += 1
        else:
            result += x
            n /= x
    return result
