#include "lists.h"
/**
 * get_dnodeint_at_index - func that return the nth node of a linked list
 * @head: input
 * @index: input
 * Return: the nth node of a linked list or NULL if doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
