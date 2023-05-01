#include "lists.h"

/**
 * find_listint_loop - write a func that find the loop in a linked list
 * @head: input
 * Return: the add of the node where the loop start,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *h1, *h2;

	if (head == NULL || head->next == NULL)
		return (NULL);
	h1 = head->next;
	h2 = head->next->next;

	while (h2)
	{
		if (h1 == h2)
		{
			h1 = head;
			while (h1 != h2)
			{
				h1 = h1->next;
				h2 = h2->next;
			}
			return (h1);
		}
		h1 = h1->next;
		h2 = h2->next->next;
	}
	return (NULL);
}
