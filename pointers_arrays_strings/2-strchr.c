#include "main.h"

/**
 * *_strchr - locate a character in a string
 * @s: pointer point to a string
 * @c: the first occurrence character
 * Return: a pointer to the first occurrence of c in s
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int x = 1;

	while (*s != '\0')
	{
		if (c == *s)
		{
			return (s);
			x = 0;
			break;
		}
		s++;
	}
	return (NULL);
}
