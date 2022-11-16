#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *first, *move;

	if (head == NULL || *head == NULL)
		return;
	while (*head)
	{
		move = *head;
		first = move;
		move = move->next;
		free(first);
	}
	move = NULL;
}
