#include "search_algos.h"

/**
 * linear_search - Function that searches for a value in an array
 * of integers using the Binary search algorithm.
 *
 * @array: Pointer to the first element of the array.
 * @size: Is the number of element in array.
 * @value: Is the value to search for.
 *
 * Return: The index where value is located.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0 ; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
