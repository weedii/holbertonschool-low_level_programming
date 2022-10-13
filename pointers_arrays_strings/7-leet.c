#include "main.h"

/**
 * *leet - encode a string into 1337
 * @p: pointer point to a string
 * Return: encode a string into 1337
 */

char *leet(char *p)
{
	int i, j;
	char leet[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char code[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (p[i] == leet[j])
			{
				p[i] = code[j - 3];
			}
		}
	}
	return (p);
}
