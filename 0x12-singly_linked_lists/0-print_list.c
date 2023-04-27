#include "lists.h"

/**
 * print_list - write a func that print all the element of a list_t list
 * @h: input
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		n++;
		h = h->next;
	}
	return (n);
}
