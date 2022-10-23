#include "main.h"

/**
 * strtow - split a string into words
 * @str: pointer to a string
 * Return: pointer to an array of strings (words) or or NuLL
 */

char **strtow(char *str)
{
	int i = 0, k = 0;
	char **g, delim[] = " ";

	if (str == NULL || strlen(str) == 0)
		return (NULL);

	g = malloc(sizeof(char) * *str);

	while (str[i] != '\0')
	{
		if (str[i] != delim[0])
			*g[k] = str[i];
		else
			goto It;
		i++;
		k++;
	}
It:
	g[i] = '\0';
	i = i + 1;

	return (g);
}
