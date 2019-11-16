#!/usr/bin/python3
"""
5-main
"""


def island_perimeter(grid):
    """ 5 island """
    st, a = "", 0
    for row in grid:
        st += ''.join([str(elem) for elem in row])
    for i in range(len(st) - 1):
        a = a + 1 if (st[i] == '0' and st[i + 1] == '1') or\
            (st[i] == '1' and st[i + 1] == '0') else a
    return a * 2 if a % 2 == 0 else (a * 2) - 1
