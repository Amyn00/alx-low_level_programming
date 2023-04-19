#include "function_pointers.h"

/**
 * int_index - write a func that search  for an integer
 * @array: input
 * @size: input
 * @cmp: input
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i = 0;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp == NULL && size > 0)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
