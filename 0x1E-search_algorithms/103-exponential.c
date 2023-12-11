#include "search_algos.h"

/**
 * exponential_search - Function that searches for a value in
 * a sorted array of integers using the Exponential search algorithm.
 *
 * @array: Is a pointer to the first element of the array to search in.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 *
 * Return: The first index where value is located.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, low, high;

	if (array == NULL)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	low = bound / 2;
	high = bound < size ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (bin_search(array, low, high, value));
}

/**
 * bin_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm within a given range
 *
 * @array: Pointer to the first element of the array to search in.
 * @low: Lower bound of the search range.
 * @high: Upper bound of the search range.
 * @value: Value to search for.
 *
 * Return: The index where value is located,
 * or -1 if value isn't present in array.
 */

int bin_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
