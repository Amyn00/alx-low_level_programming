#include "lists.h"

/**
 * sum_listint - write a func that return the sum of all the data (n)
 * of a listint_t
 * @head: input
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
