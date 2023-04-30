#include "lists.h"

/**
 * insert_nodeint_at_index - write a func that insert a new node at a given pos
 * @head: input
 * @idx: input
 * @n: input
 * Return: the add of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int node = 0;
	listint_t *h, *temp = NULL, *c_node = *head;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);
	h->n = n;
	if (idx == 0)
	{
		h->next = *head;
		*head = h;
		return (h);
	}
	for ( ; node < idx; node++)
	{
		if (c_node == NULL || c_node->next == NULL)
			return (NULL);
		temp = c_node;
		c_node = c_node->next;
	}
	if (node == idx)
	{
		temp->next = h;
		h->next = c_node;
		return (h);
	}
	return (NULL);
}
