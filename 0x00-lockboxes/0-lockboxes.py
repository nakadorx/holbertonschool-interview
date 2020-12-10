#!/usr/bin/python3
def canUnlockAll(boxes):
    if boxes[0] == [] or not isinstance(boxes, list):
        return False
    done = [0]
    for i, box in enumerate(boxes):
        for k in box:
            if k != i and k not in done and k in range(0, len(boxes)):
                done.append(k)
    return len(done) == len(boxes)
