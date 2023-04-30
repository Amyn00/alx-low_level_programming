#include "lists.h"

/**
 * print_listint - write a funct that print all the element of a listint_t list
 * @h: input
 * Return: the num of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
