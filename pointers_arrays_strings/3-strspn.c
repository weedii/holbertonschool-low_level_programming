#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer point to a string
 * @accept: pointer point to a string
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				j++;
			}
			else
				j++;
		}
		s++;
	}
	return (j + 1);
}
