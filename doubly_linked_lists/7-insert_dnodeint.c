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
	unsigned int i = 0, count = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *ptr, *save, *lengh = *h;

	/*test if idx outside the list*/
	while (lengh)
	{
		lengh = lengh->next;
		count++;
	}
	if (idx > count)
		return (NULL);

	if (i < idx && *h == NULL)
		return (NULL);
	if (new_node == NULL)
		return (0);

	/*test if Insert a node at the beginning of a list*/
	if (idx == 0)
		return (add_dnodeint(h, n));
	/*test if Insert a node at the end of a list*/
	if ((*h)->next == NULL)
		return (add_dnodeint_end(h, n));

	ptr = *h;
	while (i < idx - 1)
	{
		ptr = ptr->next;
		i++;
	}

	new_node->n = n;
	save = ptr->next;
	new_node->prev = ptr;
	new_node->next = save;
	ptr->next = new_node;
	save->prev = new_node;
	return (new_node);
}
