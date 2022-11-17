#include "lists.h"

/***/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *first, *lengh = *head, *new_node = malloc(sizeof(listint_t));
    unsigned int i = 0, count = 0;

    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    first = *head;
    if (!first)
        first = new_node;
    while (i < idx - 1)
    {
        first = first->next;
        i++;
    }
    while (lengh->next != NULL)
    {
        lengh = lengh->next;
        count++;
    }

    new_node->next = first->next;
    first->next = new_node;

    if (i > count)
        return (NULL);
    else
        return (new_node);
}