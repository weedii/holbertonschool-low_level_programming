#include "lists.h"

/**
 * delete_nodeint_at_index - function that delete a node at nth position
 * @head:  pointer to the first node
 * @index: position
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *first = *head, *delete;
	unsigned int i;

	if (*head)
	{
		if (index == 0)
		{
			*head = first->next;
			free(first);
			return (1);
		}

		for (i = 0; i < index - 1; i++)
			first = first->next;

		delete = first->next;
		first->next = delete->next;
		free(delete);
		return (1);
	}
	return (-1);
}
