#include "lists.h"

/**
 * get_nodeint_at_index - function that find the node number index
 * @head:  pointer to the first node
 * @index: number of node to find
 * Return: the nth node of a linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int find = 0;

	while (head)
	{
		if (find == index)
			break;
		else
		{
			find++;
			head = head->next;
		}
	}
	return (head);
}
