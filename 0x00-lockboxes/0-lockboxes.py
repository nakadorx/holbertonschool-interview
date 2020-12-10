#!/usr/bin/python3
"""lock box"""


def canUnlockAll(boxes):
    if boxes[0] == [] or not isinstance(boxes, list):
        return False
    keys = [0]
    opened = [0]
    new_key = True
    while new_key:
        new_key = False
        for box in boxes:
            if boxes.index(box) in keys:
                if boxes.index(box) not in opened:
                    opened.append(boxes.index(box))
                for k in box:
                    if k not in keys:
                        keys.append(k)
                        new_key = True
    if len(opened) == len(boxes):
        return True
    else:
        return False
