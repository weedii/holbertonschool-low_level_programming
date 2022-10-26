#include "main.h"

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 * @nmemb: an array of elements
 * @size:  size of the array
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = '\0';

	return (p);
}
