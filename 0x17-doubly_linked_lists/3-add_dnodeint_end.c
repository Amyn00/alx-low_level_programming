#include "lists.h"

/**
 * add_dnodeint_end - write a func that add new node at the end of a list
 * @head: input
 * @n: input
 * Return: the adresse of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
		*head = new;
	new->prev = h;
	return (new);


}
