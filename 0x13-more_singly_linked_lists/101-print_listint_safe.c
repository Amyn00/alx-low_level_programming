#include "lists.h"

/**
 * print_listint_safe - write a func that print a listint_t linked list
 * @head: input
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	const listint_t *h1, *h2;

	if (head == NULL)
		exit(98);
	h1 = head;
	h2 = head->next;
	while (h2 != NULL && h2 > h1)
	{
		printf("[%p] %d\n", (void *) h1, h1->n);
		n++;
		h2 = h2->next;
		h1 = h1->next;
		if (h1 != NULL && h2 > h1)
		{
			printf("[%p] %d\n", (void *) h1, h1->n);
			n++;
			h1 = h1->next;
		}
	}
	printf("[%p] %d\n", (void *) h1, h1->n);
	n++;
	if (h2 != NULL)
	{
		printf("-> [%p] %d\n", (void *) h2, h2->n);
		exit(98);
	}
	return (n);
}
