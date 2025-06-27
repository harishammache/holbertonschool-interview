#!/usr/bin/python3
'''
    method that determines if a given data
    set represents a valid UTF-8 encoding
'''


def validUTF8(data):
    """Return: True if data is a valid UTF-8 encoding
        else return False
    """
    follow = 0

    for byte in data:
        b = byte & 0xFF
        if follow == 0:
            if b < 128:
                continue
            elif b < 224:
                follow = 1
            elif b < 240:
                follow = 2
            elif b < 248:
                follow = 3
            else:
                return False
        else:
            if b < 128 or b > 191:
                return False
            follow -= 1

    return follow == 0
