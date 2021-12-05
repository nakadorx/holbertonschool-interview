#!/usr/bin/python3
"""[Prime Game]
"""


def isWinner(x, nums):
    """[Prime Game]
    Args:
        x ([int]): [number]
        nums ([list]): [listsay]
    Returns:
        [string]: [winner]
    """
    if not nums or x < 1:
        return None
    n = max(nums)
    lists = [True for _ in range(max(n + 1, 2))]
    for idx in range(2, int(pow(n, 0.5)) + 1):
        if not lists[idx]:
            continue
        for m in range(idx * idx, n + 1, idx):
            lists[m] = False
    lists[0] = lists[1] = False
    counter = 0
    for idx in range(len(lists)):
        if lists[idx]:
            counter += 1
        lists[idx] = counter
    player = 0
    for n in nums:
        player += lists[n] % 2 == 1
    if player * 2 == len(nums):
        return None
    if player * 2 <= len(nums):
        return "Ben"
    return "Maria"
