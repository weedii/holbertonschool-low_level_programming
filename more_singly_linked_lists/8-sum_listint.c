#include "lists.h"

/**
 * sum_listint - function that returns sum of all the data (n) of a linked list
 * @head:  pointer to the first node
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
