#include "main.h"

/**
 * *_strstr - locate a substring
 * @haystack: pointer point to a string
 * @needle: pointer point to a string
 * Return: pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				for (k = j; haystack[k] != '\0'; k++)
				{
					return (haystack + k);
				}
			}
		}
	}
	return (0);
}
