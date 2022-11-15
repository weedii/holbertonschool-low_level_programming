#include "lists.h"

/**
 * add_node -  function that adds a new node at the beginning of a list_t list
 * @head: pointer to the adress of node
 * @str:  string
 * Return: number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (head != NULL || ptr != NULL)
	{
		ptr->str = strdup(str);
		ptr->len = strlen(str);
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	return (NULL);
}
