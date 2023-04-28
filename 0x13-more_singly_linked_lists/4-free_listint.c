#include "lists.h"

/**
 * free_listint - write a funct that free a listint_t list
 * @head: input
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
