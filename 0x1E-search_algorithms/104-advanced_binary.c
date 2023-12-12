#include "search_algos.h"

/**
 * advanced_binary - Function that searches for a value in a sorted array
 * of integers.
 *
 * @array: Is a pointer to the first element of the array to search in.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 *
 * Return: The index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (array == NULL || size == 0)
		return (-1);
	return (binary_search_recursive(array, low, high, value));
}

/**
 * binary_search_recursive - Searches for a value in a sorted array
 * of integers using the Binary search algorithm with recursion.
 *
 * @array: Is a pointer to the first element of the array to search in.
 * @low: Lower bound of the search range
 * @high: Upper bound of the search range
 * @value: Is the value to search for.
 *
 * Return: The index where value is located
 */

int binary_search_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (low > high)
		return (-1);
	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i == high)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
	mid = (low + high) / 2;
	if (array[mid] == value)
	{
		if (mid == low || array[mid - 1] != value)
			return (mid);
		else
			return (binary_search_recursive(array, low, mid, value));
	}
	else if (array[mid] > value)
		return (binary_search_recursive(array, low, mid - 1, value));
	else
		return (binary_search_recursive(array, mid + 1, high, value));
}
