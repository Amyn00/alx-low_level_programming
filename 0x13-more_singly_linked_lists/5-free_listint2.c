#include "lists.h"

/**
 * free_listint2 - write a func that frees a listint_t list
 * @head: input
 */

void free_listint2(listint_t **head)
{
	while (*head != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
}
