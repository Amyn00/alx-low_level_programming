#include "lists.h"

/**
 * print_listint - write a funct that print all the element of a listint_t list
 * @h: input
 * Return: the num of nodes
 */

size_t print_listint(const listint_t *h)
{
	int num = 0;
	listint_t *he;

	he = (listint_t *)h;
	while (he != NULL)
	{
		printf("%d\n", he->n);
		num++;
		he = he->next;
	}
	return (num);
}
