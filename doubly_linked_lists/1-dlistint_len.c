#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h:     pointer to the first node
 * Return: the number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h)
	{
		while (h)
		{
			h = h->next;
			i++;
		}
		return (i);
	}
	return (0);
}
