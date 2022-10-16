#include "main.h"

/**
 * *_strpbrk - searche a string for any of a set of bytes
 * @s: pointer point to array
 * @accept: zize of the array
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int len1, len2, i, j, k;

	for (len1 = 0; s[len1] != '\0'; len1++)
		;

	for (len2 = 0; accept[len2] != '\0'; len2++)
		;

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				for (k = i; s[k] != '\0'; k++)
					return (s + k);
			}
		}
	}
	return (0);
}
