#include "main.h"

/**
 * *_strpbrk - searche a string for any of a set of bytes
 * @s: pointer point to array
 * @accept: zize of the array
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int len, len1, i, j, k;

	len = strlen(s);
	len1 = strlen(accept);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len1; j++)
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
