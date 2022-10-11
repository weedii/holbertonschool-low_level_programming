#include "main.h"

/**
 * *_strcpy - copie the string
 * @dest: pointer point to a string
 * @src: pointer point to a string
 * Return: a copie of the string
 */

char *_strcpy(char *dest, char *src)
{

	while (*src != '\0')
	{
		*dest = *src;
		printf("%c", *src);
		dest++;
		src++;
	}
	return (dest);
}
