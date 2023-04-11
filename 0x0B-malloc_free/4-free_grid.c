#include "main.h"

/**
 * free_grid - write a func that frees a 2 dim grid previously created by your
 * alloc_grid func
 * @grid: input
 * @height: input
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
