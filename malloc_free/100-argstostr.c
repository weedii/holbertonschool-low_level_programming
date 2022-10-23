#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	p = malloc(sizeof(char) * **av);

	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}
	return (p);
}
