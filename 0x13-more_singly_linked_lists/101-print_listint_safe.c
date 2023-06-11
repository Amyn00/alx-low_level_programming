#include "lists.h"
/**
 * looped_listint - write func that count the num of unique nodes
 * @head: input
 * Return: num of unique nodes, otherwise 0
 */

size_t looped_listint(const listint_t *head)
{
	const listint_t *h1, *h2;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	h1 = head->next;
	h2 = head->next->next;

	while (h2)
	{
		if (h1 == h2)
		{
			h1 = head;
			while (h1 != h2)
			{
				node++;
				h1 = h1->next;
				h2 = h2->next;
			}
			h1 = h1->next;
			while (h1 != h2)
			{
				node++;
				h1 = h1->next;
			}
			return (node);
		}
		h1 = h1->next;
		h2 = h2->next->next;
	}
	return (0);
}


/**
 * print_listint_safe - write a func that print a listint_t linked list
 * @head: input
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0, node = looped_listint(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (; n < node; n++)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *) head, head->n);
	}
	return (node);
}
