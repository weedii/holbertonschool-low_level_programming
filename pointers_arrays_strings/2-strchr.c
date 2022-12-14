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

	while (*s != '\0' || c == *s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}

	return (0);
}
