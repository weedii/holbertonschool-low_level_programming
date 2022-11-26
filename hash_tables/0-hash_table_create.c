#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size:  is the size of the array in the hash table
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *_hash_table = malloc(sizeof(hash_table_t));

	_hash_table->size = size;
	_hash_table->array = malloc(sizeof(hash_node_t *) * size);

	return (_hash_table);
}
