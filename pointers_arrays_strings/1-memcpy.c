#include "main.h"

/**
 * *_memcpy - copies memory area
 *@dest: pointer point to a string
 *@src: pointer point to a string
 *@n:  bytes from memory area src to memory area dest
 * Return: concatenates two strings
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
