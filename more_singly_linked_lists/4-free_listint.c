#include "lists.h"

/**
 * free_listint- function that frees a listint_t list
 * @h: pointer to the first node
 */

void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
