#include "main.h"

/**
 * array_range - write a funct that creat an array of int
 * @min: input
 * @max: input
 * Return: array
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		;
	p = malloc(sizeof(int) * i + 1);
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		p[i - min] = i;
	return (p);
}
