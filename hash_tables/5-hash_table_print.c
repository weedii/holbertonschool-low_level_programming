#include "hash_tables.h"

/***/

void hash_table_print(const hash_table_t *ht)
{
    unsigned long int j;
    hash_node_t *p;

    if (!ht)
    {
        return;
    }
    for (j = 0; ht && j < ht->size; j++)
    {
        p = ht->array[j];
        while (p)
        {
            printf("%s : %s ", p->key, p->value);
            p = p->next;
        }
    }
}
