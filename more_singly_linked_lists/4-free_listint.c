#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to the first node
 */

void free_listint(listint_t *head)
{
	listint_t *first;

	while (head)
	{
		first = head;
		head = head->next;
		free(first);
	}
}
