#include "lists.h"

/**
 * free_listint_safe - write a func that free a listint_t list
 * @h: input
 * Return: the size of the list was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t n = 0, node = looped_listint(*h);
	listint_t *temp;

	if (node == 0)
	{
		for (; h != NULL && *h != NULL; node++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	} else
	{
		for (; n < node; n++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}
	h = NULL;
	return (node);
}
