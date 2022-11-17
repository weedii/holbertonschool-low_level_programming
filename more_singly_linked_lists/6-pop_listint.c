#include "lists.h"

/***/

int pop_listint(listint_t **head)
{
    listint_t *delte;
    int n;

    if (*head)
    {
        delte = *head;
        n = delte->n;
        *head = (*head)->next;
        free(delte);
        return (n);
    }
    return (0);
}