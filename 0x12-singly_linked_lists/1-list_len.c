#include "lists.h"

/**
 * list_len - write a func that return the num of element
 * in a linked list_t list
 * @h: input
 * Return: num of element
 */

size_t list_len(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
