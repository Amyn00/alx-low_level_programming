#include "lists.h"

/**
 * free_list - write a funct that frees a list_t list
 * @head: input
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
