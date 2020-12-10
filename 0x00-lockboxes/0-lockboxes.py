#!/usr/bin/python3
"""lock box"""


def canUnlockAll(boxes):
    if boxes[0] == [] or not isinstance(boxes, list):
        return False
    done = [0]
    for idx, box in enumerate(boxes):
        for k in box:
            if k != idx and k not in done and k in range(0, len(boxes)):
                done.append(k)
    return len(done) == len(boxes)
