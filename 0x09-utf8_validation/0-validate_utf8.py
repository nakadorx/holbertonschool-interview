#!/usr/bin/python3
"""holn"""

def validUTF8(data):
    """utf8"""
    tab = [i & 0b11111111 for i in data]
    num = bytes(tab)
    try:
        num.decode()
    except UnicodeDecodeError:
        return False
    return True
