#include "hash_tables.h"

/***/

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *_hash_table = malloc(sizeof(hash_table_t));

    if (!_hash_table)
        return (NULL);

    _hash_table->size = size;
    _hash_table->array = malloc(sizeof(hash_node_t *) * size);

    return (_hash_table);
}