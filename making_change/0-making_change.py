#!/usr/bin/python3
"""
    Making Change
"""


def makeChange(coins, total):
    """determine the fewest number of coins"""
    if total <= 0:
        return 0
    if not coins:
        return -1

    min_pieces = [1000000] * (total + 1)
    min_pieces[0] = 0

    for i in range(1, total + 1):
        for coin in coins:
            if coin <= i:
                if min_pieces[i - coin] + 1 < min_pieces[i]:
                    min_pieces[i] = min_pieces[i - coin] + 1

    if min_pieces[total] == 1000000:
        return -1
    else:
        return min_pieces[total]
