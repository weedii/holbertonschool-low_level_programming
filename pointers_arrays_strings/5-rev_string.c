#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer point to a string
 */

void rev_string(char *s)
{
	int i, x;
	char *deb, *fin, y;

	x = strlen(s);
	deb = s;
	fin = s;

	for (i = 0; i < x - 1; i++)
	{
		fin++;
	}

	for (i = 0; i < x / 2; i++)
	{
		y = *fin;
		*fin = *deb;
		*deb = y;

		deb++;
		fin--;
	}
}
