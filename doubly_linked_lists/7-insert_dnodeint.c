#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a
 *                  new node at a given position
 * @h:     pointer to the first node
 * @idx:   the index of the list where the new node should be added
 * @n:     number in the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t i = 0, count = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *ptr, *save, *lengh = *h;

	/*test if index outside the list*/
	while (lengh)
	{
		lengh = lengh->next;
		count++;
	}
	if (idx > count)
		return (NULL);

	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (*h);
	}
	ptr = *h;
	while (i <= idx)
	{
		if (i < idx - 1)
		{
			ptr = ptr->next;
			i++;
		}
		else
			break;
		if (i == idx)
		{
			add_dnodeint_end(h, n);
			return (*h);
		}
	}
	new_node->n = n;
	save = ptr->next;
	new_node->prev = ptr;
	new_node->next = save;
	ptr->next = new_node;
	return (new_node);
}
