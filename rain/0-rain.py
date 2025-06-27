#!/usr/bin/python3
"""
    list of non-negative integers representing the heights of walls
    with unit width 1, as if viewing the cross-section of a relief map,
    calculate how many square units of water will be retained after it rain
"""


def rain(walls):
    """walls is a list of non-negative integers"""
    if not walls:
        return 0

    n = len(walls)
    total = 0

    left_max = [0] * n
    right_max = [0] * n

    left_max[0] = walls[0]
    for i in range(1, n):
        left_max[i] = max(left_max[i - 1], walls[i])

    right_max[-1] = walls[-1]
    for i in range(n - 2, -1, -1):
        right_max[i] = max(right_max[i + 1], walls[i])

    for i in range(n):
        water = min(left_max[i], right_max[i]) - walls[i]
        if water > 0:
            total += water

    return total
