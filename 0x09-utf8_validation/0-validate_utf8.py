#!/usr/bin/python3
"""holn"""


def validUTF8(data):
    """utf8"""
    try:
        bytes([i & 0b11111111 for i in data]).decode()
    except UnicodeDecodeError:
        return False
    return True
