#include "lists.h"

/**
 * print_list - write a func that print all the element of a list_t list
 * @h: input
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	if (h->str == NULL)
		printf("[0] (nil)");
	while (h != NULL)
	{
		printf("[%d] %lu", h->len, h->str);
		h = h->next;
	}
}
