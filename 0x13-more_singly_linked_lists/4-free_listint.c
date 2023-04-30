#include "lists.h"

/**
 * free_listint - write a funct that free a listint_t list
 * @head: input
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
