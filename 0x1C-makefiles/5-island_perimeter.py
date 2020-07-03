#!/usr/bin/python3
""" Module """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid """
    if grid is not None:
        new = 0
        for x in grid:
            if x == 1:
                new += 2
        return new
