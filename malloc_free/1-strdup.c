#include "main.h"

/**
 * _strdup - duplicate a string
 * @str: pointer to a string
 * Return: pointer to a newly allocated space in memory which contains
 *		a copy of the string given as a parameter or NULL if str = NULL
 */

char *_strdup(char *str)
{
	int len = strlen(str), i;

	char *ch = malloc(sizeof(char) * len);

	if (str == NULL || len == 0)
		return (NULL);

	for (i = 0; i < len - 1; i++)
		ch[i] = str[i];

	return (ch);
}
