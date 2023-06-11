#include "lists.h"

/**
 * print_listint - write a funct that print all the element of a listint_t list
 * @h: input
 * Return: the num of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
