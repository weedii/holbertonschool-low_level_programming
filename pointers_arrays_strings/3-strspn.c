#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer point to a string
 * @accept: pointer point to a string
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, x = 0, y = strlen(accept);

	for (i = 0; accept[i] <= y; i++)
	{
		while (*s != '\0')
		{
			if (accept[i] == *s)
			{
				x++;
				s++;
			}
		}
	}
	return (x);
}
