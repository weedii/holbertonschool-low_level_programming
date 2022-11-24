#include "lists.h"

/***/

size_t dlistint_len(const dlistint_t *h)
{
    size_t i = 0;

    if (h)
    {
        while (h)
        {
            h = h->next;
            i++;
        }
        return (i);
    }
    return (0);
}