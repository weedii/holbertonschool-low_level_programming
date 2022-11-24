#include "lists.h"

/**
 * free_dlistint - unction that frees a dlistint_t list
 * @head: pointer to the first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *prey = head;

	while (head)
	{
		free(prey);
		head = head->next;
		prey = head;
	}
}
