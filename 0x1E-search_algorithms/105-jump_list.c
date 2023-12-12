#include "search_algos.h"

/**
 * jump_list - Function that searches for a value in a sorted list
 * of integers using the Jump search algorithm.
 *
 * @list: Is a pointer to the head of the list to search in.
 * @size: Is the number of nodes in list.
 * @value: Is the value to search for.
 *
 * Return: Pointer to the first node where value is located.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, pv, cur;
	listint_t *tmp;

	if (list == NULL || size == 0)
		return (NULL);

	step = sqrt(size);
	tmp = list;

	while (tmp->index < size - 1 && tmp->n < value)
	{
		pv = tmp->index;
		for (cur = tmp->index + step; cur <= size - 1; cur += step)
		{
			printf("Value checked at index [%lu] = [%d]\n", cur, (tmp + cur)->n);
			if ((tmp + cur)->n >= value)
				break;
			pv = cur;
		}
		printf("Value found between indexes [%lu] and [%lu]\n", pv, cur);
		printf("Value checked at index [%lu] = [%d]\n", pv, (tmp + pv)->n);
		while (pv < size - 1 && (tmp + pv)->n < value)
			pv++;
		if ((tmp + pv)->n == value)
			return (tmp + pv);
		printf("Value checked at index [%lu] = [%d]\n", pv, (tmp + pv)->n);
		tmp += pv;
	}
	return (NULL);
}
