#include "main.h"

/**
 * *_strcpy - copies the string
 * @dest: pointer point to a string
 * @src: pointer point to a string
 */

char *_strcpy(char *dest, char *src)
{
	int i, x;

	x = strlen(src);

	for (i = 0; i < x; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
