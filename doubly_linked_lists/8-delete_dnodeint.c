#include "lists.h"

/**
 * check_index - function that check the index
 * @lengh: pointer to the first node
 * @index: the index of the node that should be deleted
 * Return: -1 on failure
 */

int check_index(dlistint_t *lengh, unsigned int index)
{
	unsigned int count = 0;

	while (lengh)
	{
		lengh = lengh->next;
		count++;
	}
	if (index > count)
		return (-1);
	else
		return (1);
}

/**
 * delete_dnodeint_at_index - function that deletes the node
 *                  at index index of a dlistint_t linked list
 * @head:  pointer to the first node
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t ta7 = 0;
	dlistint_t *ptr = *head, *first = *head, *lengh = *head;

	if (*head && check_index(lengh, index) != -1)
	{
		if (index == 0)
		{
			if (first->next)
			{
				*head = (*head)->next;
				(*head)->prev = NULL;
				free(first);
				first = NULL;
				return (1);
			}
			else
			{
				free(*head);
				*head = NULL;
				return (1);
			}
		}
		while (ta7 < index)
		{
			ptr = ptr->next;
			ta7++;
		}
		if (ptr->next == NULL)
		{
			ptr->prev->next = NULL;
			free(ptr);
			return (1);
		}
		ptr->prev->next = ptr->next;
		ptr->next->prev = ptr->prev;
		free(ptr);
		return (1);
	}
	return (-1);
}
