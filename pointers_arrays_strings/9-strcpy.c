#include "main.h"

/**
 * *_strcpy - copie the string
 * @dest: pointer point to a string
 * @src: pointer point to a string
 * Return: a copie of the string
 */

char *_strcpy(char *dest, char *src)
{
	char *ch1, *ch2;

	ch1 = dest;
	ch2 = src;

	while (*ch2 != '\0')
	{
		*ch1 = *ch2;
		printf("%c", *ch2);
		ch1++;
		ch2++;
	}
	printf("\n");
	return (ch1);
}
