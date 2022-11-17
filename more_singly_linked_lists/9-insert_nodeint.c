#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts new node at a given position
 * @head: pointer to the first node
 * @idx:  position
 * @n:   number n
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *first, *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head && idx == 0)
		*head = new_node;

	else
	{
		first = *head;
		while (i < idx - 1)
		{
			first = first->next;
			i++;
		}
		new_node->next = first->next;
		first->next = new_node;
	}
	return (new_node);
}
