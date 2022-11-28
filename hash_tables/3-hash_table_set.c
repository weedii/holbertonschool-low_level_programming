#include "hash_tables.h"

/***/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_element = malloc(sizeof(hash_node_t));
    unsigned long int index;

    if (!new_element)
        return (0);

    new_element->key = strdup(key);
    new_element->value = strdup(value);

    index = key_index((const unsigned char *)key, ht->size);
    ht->array[index] = new_element;

    return (1);
}