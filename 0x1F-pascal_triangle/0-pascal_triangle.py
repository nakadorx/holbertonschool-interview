#!/usr/bin/python3
"""[pascal triangle]
"""


def pascal_triangle(n):
    """[pascals_triangle]
    """
    res = []
    for idx in range(n):
        el = [None for _ in range(idx + 1)]
        el[0], el[-1] = 1, 1
        for j in range(1, len(el) - 1):
            el[j] = res[idx - 1][j - 1] + res[idx - 1][j]
        res.append(el)
    return res
