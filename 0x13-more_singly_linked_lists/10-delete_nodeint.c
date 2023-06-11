#include "lists.h"

/**
 * delete_nodeint_at_index - write a func that deletes the node at index index
 * of a listint_t linked list
 * @head: input
 * @index: input
 * Return: 1 if it succeeded -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *h;
	unsigned int node = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for ( ; node < (index - 1) && temp != NULL; node++)
		temp = temp->next;
	if (temp == NULL || temp->next == NULL)
		return (-1);
	h = temp->next->next;
	free(temp->next);
	temp->next = h;
	return (1);
}
