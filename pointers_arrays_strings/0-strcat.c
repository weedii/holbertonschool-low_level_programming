#include "main.h"

/**
 * *_strcat - concatenates two strings
 *@dest: pointer point to a string
 *@src: pointer point to a string
 * Return: concatenates two strings
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);
}
