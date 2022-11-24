#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node
 *             at the end of a dlistint_t list
 * @head:  pointer to the first node
 * @n:     number in the new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *ptr;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		new_node->prev = ptr;
		ptr->next = new_node;
	}
	return (new_node);
}
