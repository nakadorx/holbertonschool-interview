#!/usr/bin/python3
"""holn"""

def validUTF8(data):
    """utf8"""
    num = bytes([i & 0b11111111 for i in data])
    try:
        num.decode()
    except UnicodeDecodeError:
        return False
    return True
