#include "lists.h"

/**
 * dlistint_len - write a func that return the num of elemnt in a linked list
 * @h: input
 * Return: the number of element in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
