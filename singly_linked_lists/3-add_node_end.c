#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to the adress of the first node
 * @str:   pointer to a string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head, *new_node = malloc(sizeof(list_t));

	if (new_node == NULL || str == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{

		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
	}
	return (new_node);
}
