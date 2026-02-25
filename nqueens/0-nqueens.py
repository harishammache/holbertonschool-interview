#!/usr/bin/python3
import sys

if len(sys.argv) != 2:
    print("Usage: nqueens N")
    sys.exit(1)

try:
    N = int(sys.argv[1])
except ValueError:
    print("N must be a number")
    sys.exit(1)

if N < 4:
    print("N must be at least 4")
    sys.exit(1)


def is_safe(solution, row, col):
    """Check if a queen can be placed at (row, col)"""
    for r, c in enumerate(solution):
        if c == col or abs(c - col) == abs(r - row):
            return False
    return True


def solve_nqueens(N, row=0, solution=[]):
    """Backtracking to find all solutions"""
    if row == N:
        print([[r, c] for r, c in enumerate(solution)])
        return
    for col in range(N):
        if is_safe(solution, row, col):
            solve_nqueens(N, row + 1, solution + [col])


solve_nqueens(N)
