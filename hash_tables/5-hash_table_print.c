#include "hash_tables.h"

/***/

void hash_table_print(const hash_table_t *ht)
{
    unsigned int i = 0, j = 0;

    if (ht)
    {
        putchar('{');
        while (j < ht->size)
        {
            while (ht->array[i])
            {

                if (!(ht->array[i]->next))
                {
                    printf("'%s' : '%s'", ht->array[i]->key, ht->array[i]->value);
                }
                else
                {
                    printf("'%s' : '%s', ", ht->array[i]->key, ht->array[i]->value);
                }
                ht->array[i] = ht->array[i]->next;
            }
            j++;
            i++;
        }
        putchar('}');
        putchar('\n');
    }
}