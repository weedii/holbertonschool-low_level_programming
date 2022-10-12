#include "main.h"

/**
 * *_strncat - concatenates two strings using at most n bytes from src
 *@dest: pointer point to a string
 *@src: pointer point to a string
 *@n: bytes from src
 * Return: concatenates two strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);
}
