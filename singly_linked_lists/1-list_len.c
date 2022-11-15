#include "lists.h"

/**
 * list_len - function that returns the number of elements in linked list
 * @h:     pointer to the adress of node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
