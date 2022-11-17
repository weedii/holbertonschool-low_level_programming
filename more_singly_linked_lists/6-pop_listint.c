#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head:  pointer to the first node
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *delte;
	int n;

	if (*head)
	{
		delte = *head;
		n = delte->n;
		*head = (*head)->next;
		free(delte);
		return (n);
	}
	return (0);
}
