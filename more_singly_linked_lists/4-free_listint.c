#include "lists.h"

/**
 * free_listint- function that frees a listint_t list
 * @head: pointer to the first node
 */

void free_listint(listint_t *head)
{
	listint_t *first = head;

	while (head != NULL)
	{
		head = head->next;
		free(first);
	}
}
