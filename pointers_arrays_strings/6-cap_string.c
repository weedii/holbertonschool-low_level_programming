#include "main.h"

/**
 * *cap_string - capitalize all words of a string
 * @s: pointer point to a string
 * Return: capitalize all words of a string
 */

char *cap_string(char *s)
{
	char o[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 12; j++)
		{
			if (s[i] == o[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}

		if (s[0])
		{
			s[0] = s[0] - 32;
		}
	}

	return (s);
}
