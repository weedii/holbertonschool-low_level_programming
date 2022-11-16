#include "lists.h"

/***/

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