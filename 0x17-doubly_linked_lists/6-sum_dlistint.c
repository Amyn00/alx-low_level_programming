#include "lists.h"

/**
 * sum_dlistint - func that return sum of all the data(n) of a linked list
 * @head: input
 * Return: sum of all data linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
