#include "lists.h"

/**
 * listint_len - write a func that return the num of element in a linked
 * listint_t list
 * @h: input
 * Return: num of ele
 */

size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
