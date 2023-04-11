#include "main.h"

/**
 * alloc_grid - write a func that return a ptr to a 2 dim array of int
 * @width: input width
 * @height: input height
 * Return: 0 and NULL if w or h is 0 or neg or is failure
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **tab = (int **)malloc(sizeof(int *) * width);

	if (width < 1 || height < 1)
		return (NULL);

	for (i = 0; i < width; i++)
		tab[i] = (int *)malloc(sizeof(int) * height);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			tab[i][j] = 0;
	}
	return (tab);
}
