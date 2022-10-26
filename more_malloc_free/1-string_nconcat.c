#include "main.h"

/**
 * string_nconcat - concatenates two strings with n bytes
 * @s1: pointer to a string
 * @s2: pointer to a string
 * @n:  n bytes of s2
 * Return: return pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,or NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch;
	unsigned int i, j, len_s1, len_s2, len_concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	len_concat = len_s1 + n;

	if (n >= len_s2)
		ch = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	else
		ch = malloc(sizeof(char) * (len_concat + 1));

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		ch[i] = s1[i];

	if (n >= len_s2)
	{
		for (j = 0; j < len_s2; j++)
			ch[i + j] = s2[j];
	}
	else
	{
		for (j = 0; j < n; j++)
			ch[i + j] = s2[j];
	}

	ch[i + j] = '\0';

	return (ch);
}
