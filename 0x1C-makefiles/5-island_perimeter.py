#!/usr/bin/python3
"""
5-main
"""


def island_perimeter(grid):
    """ 5 island """
    s, a, b, c = "", 0, 0, len(grid[0])
    for row in grid:
        s, b = s + ''.join([str(elem) for elem in row]), b + 1
    for i in range(len(s) - 1):
        a += 1 if (s[i] == '0' and (s[i - 1] == '1' or s[i + 1] == '1')) else 0
    for i in range(c, c*(b - 1), 1):
        a += 1 if (s[i] == '1' and s[i - c] == '0' and s[i - c - 1] != '1') else 0
        a += 1 if (s[i] == '1' and s[i + c] == '0') else 0
    return a
