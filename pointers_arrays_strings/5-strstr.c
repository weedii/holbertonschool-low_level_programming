#include "main.h"

/**
 * *_strstr - locate a substring
 * @haystack: pointer point to a string
 * @needle: pointer point to a string
 * Return: pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			while (haystack[i + j] == needle[j] && needle[j] != '\0')
			{
				j++;
			}
		}

		if (!needle[j])
			return (needle);
		else
			j = 0;
	}
	return (0);
}
