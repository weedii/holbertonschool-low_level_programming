#include "lists.h"

/***/

void free_dlistint(dlistint_t *head)
{
    dlistint_t *prey = head;

    while (head)
    {
        free(prey);
        head = head->next;
        prey = head;
    }
}