#include "main.h"

/**
 * create_array - create an array of chars
 * and initialize it with a specific char
 * @size: size to be allocated in memory
 * @c: char to print
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ch = malloc(sizeof(char) * size);
	unsigned int i;

	if (ch == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
