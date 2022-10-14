#include "main.h"

/**
 * *leet - encode a string into 1337
 * @p: pointer point to a string
 * Return: encode a string into 1337
 */

char *leet(char *p)
{
	int i, j;
	char ch[5] = {'a', 'e', 'o', 't', 'l'};
	char ch1[5] = {'A', 'E', 'O', 'T', 'L'};
	char leet[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (p[i] == ch[j] || p[i] == ch1[j])
			{
				p[i] = leet[j];
			}
		}
	}
	return (p);
}
