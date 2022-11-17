#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *first, *move;

	if (*head == NULL)
		return;

	move = *head;
	while (move)
	{
		first = move;
		move = move->next;
		free(first);
	}
	*head = NULL;
}
