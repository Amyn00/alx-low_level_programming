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
	int **tab = (int **)malloc(sizeof(int *) * height);

	if (width < 1 || height < 1)
		return (NULL);

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		tab[i] = (int *)malloc(sizeof(int) * width);
		if (tab[i] == NULL)
		{
			for (i -= 1; i >= 0; i--)
				free(tab[i]);
			free(tab);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			tab[i][j] = 0;
	return (tab);
}
