#!/usr/bin/python3
def canUnlockAll(boxes):
    verified = True
    pw = [0]
    done = [0]
    while verified:
        verified = False
        for box in boxes:
            if boxes.index(box) in pw:
                if boxes.index(box) not in done:
                    done.append(boxes.index(box))
                for t in box:
                    if t not in pw:
                        pw.append(t)
                        verified = True
    if len(boxes) == len(done):
        return True
    else:
        return False
