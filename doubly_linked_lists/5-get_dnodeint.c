#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 *              of a dlistint_t linked list
 * @head:  pointer to the first node
 * @index: the index of the node, starting from 0
 * Return: the nth node of a linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t ta7 = 0;

	while (head)
	{
		if (ta7 == index)
			return (head);
		ta7++;
		head = head->next;
	}
	return (NULL);
}
