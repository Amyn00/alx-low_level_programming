#include "lists.h"

/**
 * free_list - write a funct that frees a list_t list
 * @head: input
 */

void free_list(list_t *head)
{
	free(head->str);
	free(head);
}
