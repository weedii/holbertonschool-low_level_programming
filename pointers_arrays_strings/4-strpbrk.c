#include "main.h"

/**
 * *_strpbrk - searche a string for any of a set of bytes
 * @s: pointer point to array
 * @accept: zize of the array
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	if ((s == NULL) || (accept == NULL))
	{
		return (NULL);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i] == accept[j]; j++)
		{
			return (s + 2);
		}
	}
	return (s + 2);
}
