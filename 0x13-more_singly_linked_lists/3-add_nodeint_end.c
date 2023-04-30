#include "lists.h"

/**
 * add_nodeint_end - write a func that add new node at the end
 * @head: input
 * @n: input
 * Return: the add of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h, *temp;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	h->next = NULL;
	if (*head == NULL)
		*head = h;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = h;
	}
	return (*head);
}
