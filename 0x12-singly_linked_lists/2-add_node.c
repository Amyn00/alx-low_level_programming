#include "lists.h"

/**
 * add_node - write a func that add a new node at
 * the beginning of a list_t list
 * @head: input
 * @str: input
 * Return: add of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = (*head);
	(*head) = new;
	return (new);
}
