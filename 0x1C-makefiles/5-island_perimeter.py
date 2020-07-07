#!/usr/bin/python3
""" Module Python"""


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid """
    if grid is not None:
        new = 0
        for x in range(len(grid)):
            for y in range(len(grid[x])):
                if grid[x][y] == 1:
                    for x, y in ((x + 1, y), (x - 1, y),
                                 (x, y + 1), (x, y - 1)):
                        if (x < 0 or x == len(grid) or
                            y < 0 or y == len(grid[x])
                                or grid[x][y] == 0):
                            new += 1
        return new
