#include "lists.h"

/**
 * delete_dnodeint_at_index - func that deletes the node at idx of a list
 * @head: input
 * @index: input
 * Return: 1 if if succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1 = *head, *h2;
	unsigned int i = 0;

	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;
	while (h1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;
				if (h1->next != NULL)
					h1->next->prev = h2;
			}
			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		i++;
	}
	return (-1);
}
