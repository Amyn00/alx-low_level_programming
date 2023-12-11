#include "search_algos.h"

/**
 * jump_search - Function that searches for a value in a sorted array
 * of integers using the Jump search algorithm.
 *
 * @array: Is a pointer to the first element of the array to search in.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 *
 * Return: The first index where value is located.
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t l = 0, r = 0, i;

	if (array == NULL)
		return (-1);
	while (r < size && array[r] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", r, array[r]);
		l = r;
		r += jump;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", l, r);
	for (i = l; i < size && i <= r; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
