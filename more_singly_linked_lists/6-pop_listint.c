#include "lists.h"

/***/

int pop_listint(listint_t **head)
{
    listint_t *delte;
    int n;

    if (head == NULL)
        return (0);

    delte = *head;
    n = delte->n;
    *head = (*head)->next;
    free(delte);

    return (n);
}