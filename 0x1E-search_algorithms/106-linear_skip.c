#include "search_algos.h"

/**
 * linear_skip - Function that searches for a value in a sorted skip list
 * of integers.
 *
 * @list: Is a pointer to the head of the skip list to search in.
 * @value: Is the value to search for.
 *
 * Return: Pointer on the first node where value is located.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *ex;
	size_t l = list->index;

	if (list == NULL)
		return (NULL);
	ex = list->express;
	printf("Value checked at index [%lu] = [%d]\n", ex->index, ex->n);
	while (ex != NULL && ex->n < value)
	{
		list = ex;
		ex = ex->express;
		if (ex != NULL)
			printf("Value checked at index [%lu] = [%d]\n", ex->index, ex->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", l, ex->index);
	while (list != NULL && list->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", l, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
