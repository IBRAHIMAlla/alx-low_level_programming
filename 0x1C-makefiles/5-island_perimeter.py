#!/usr/bin/python3
"""
5-island_perimeter module
"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    dim = 0

    for m in range(len(grid)):
        for y in range(len(grid[m])):
            if grid[m][y]:
                dim += 4

                if m > 0 and grid[m - 1][y] == 1:
                    dim -= 2

                if y > 0 and grid[m][y - 1] == 1:
                    dim -= 2

    return dim
