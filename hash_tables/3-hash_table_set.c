#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht:    pointer to the hash table
 * @key:   is the key
 * @value: is the value associated with the key, value must be duplicated
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element = malloc(sizeof(hash_node_t));
	unsigned long int index;

	if (!new_element)
		return (0);

	if (ht)
	{
		new_element->key = strdup(key);
		new_element->value = strdup(value);

		index = key_index((const unsigned char *)key, ht->size);

		if (!ht->array[index])
			ht->array[index] = new_element;
		else
		{
			if (strcmp(ht->array[index]->key, key) == 0)
			{
				free(ht->array[index]->value);
				ht->array[index]->value = strdup(value);
			}
			else
			{

				new_element->next = ht->array[index];
				ht->array[index] = new_element;
			}
		}
		return (1);
	}
	return (0);
}
