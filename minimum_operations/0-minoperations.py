#!/usr/bin/python3
"""
    write a method that calculates the fewest number of operations
    needed to result in exactly n H characters in the file
"""


def minOperations(n):
    """

        Returns an integer
        If n is impossible to achieve, return 0
    """
    if n < 2:
        return 0

    ops = 0
    facteur = 2

    while n > 1:
        while n % facteur == 0:
            ops += facteur
            n = n // facteur
        facteur += 1

    return ops
