#include "lists.h"

/**
 * add_nodeint - write a funct that add new node at the beginning
 * @head: input
 * @n: input
 * Return: add of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *h;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	h->next = *head;
	*head = h;
	return (h);
}
