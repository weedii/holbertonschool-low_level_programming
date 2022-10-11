#include "main.h"

/**
 * *_strcpy - copie the string
 * @dest: pointer point to a string
 * @src: pointer point to a string
 * Return: copie of the string
 */

char *_strcpy(char *dest, char *src)
{
	int i, x;

	x = strlen(src);

	for (i = 0; i < x; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
