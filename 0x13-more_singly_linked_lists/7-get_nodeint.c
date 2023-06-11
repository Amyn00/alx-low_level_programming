#include "lists.h"

/**
 * get_nodeint_at_index - write a func that return the nth node of a listint_t
 * @head: input
 * @index: input
 * Return: the nth node of a listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	for ( ; node < index; node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
