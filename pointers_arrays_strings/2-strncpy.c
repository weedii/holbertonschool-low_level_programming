#include "main.h"

/**
 * *_strncpy - copie a string
 * @dest: pointer point to a string
 * @src: pointer point to a string
 * @n: bytes from src
 * Return: copie a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
