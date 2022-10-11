#include "main.h"

/**
 * *_strcpy - copie the string
 * @dest: pointer point to a string
 * @src: pointer point to a string
 * Return: a copie of the string
 */

char *_strcpy(char *dest, char *src)
{
	int i, a;

	a = strlen(src);
	for (i = 0; i <= a; i++)
		dest[i] = src[i];
	return (dest);
}
