#!/usr/bin/python3
"""
Function that returns the perimeter of the island described in grid.
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.

    Args:
        grid (List[List[int]]): A list of lists representing the island grid.
    Returns:
        int: The perimeter of the island.
    Requirement:
        - 0 represents a water zone
        - 1 represents a land zone
        - One cell is a square with side length 1
        - Grid cells are connected horizontally/vertically (not diagonally).
        - Grid is rectangular, width and height don’t exceed 100
        - Grid is completely surrounded by water, and there is one island.
        - The island doesn’t have “lakes”.
    """
    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] == 0:
                    perimeter += 1
                if row == rows - 1 or grid[row + 1][col] == 0:
                    perimeter += 1
                if col == 0 or grid[row][col - 1] == 0:
                    perimeter += 1
                if col == cols - 1 or grid[row][col + 1] == 0:
                    perimeter += 1
    return perimeter
