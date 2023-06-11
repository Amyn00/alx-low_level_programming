#include "lists.h"

/**
 * pop_listint - write a func that delete the head node of a listint_t,
 * and return the head node's data (n)
 * @head: input
 * Return: head node data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (*head == NULL)
		return (0);
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}
