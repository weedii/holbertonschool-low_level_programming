#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 * Return: return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *ch;
	int i, j, len, len1, len_concat;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	len = strlen(s1);
	len1 = strlen(s2);
	len_concat = len + len1 + 1;

	ch = malloc(sizeof(char) * len_concat);

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < len_concat; i++)
		ch[i] = s1[i];

	for (i = 0; ch[i] != '\0'; i++)
		;

	for (j = 0; j < len1; j++)
		ch[i + j] = s2[j];
	ch[i + j] = '\0';

	return (ch);
}
