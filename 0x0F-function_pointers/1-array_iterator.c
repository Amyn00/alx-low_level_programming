#include "function_pointers.h"

/**
 * array_iterator - write a func that exec a func given as a param on each ele
 * of an array
 *
 * @array: input
 * @size: input
 * @action: input
 */

void array_iterator(int *array, size_t size, void (*action) (int))
{
	unsigned int i = 0;

	if (array != NULL && size > 0 && action != NULL)
		while (i < size)
		{
			action(array[i]);
			i++;
		}
}
