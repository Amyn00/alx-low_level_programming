#include "lists.h"

/**
 * reverse_listint - write a func that reverses a listint_t linked list
 * @head: input
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *h1, *h2;

	if (head == NULL || *head == NULL)
		return (NULL);
	h2 = NULL;
	while ((*head)->next != NULL)
	{
		h1 = (*head)->next;
		(*head)->next = h2;
		h2 = *head;
		*head = h1;
	}
	(*head)->next = h2;
	return (*head);
}
