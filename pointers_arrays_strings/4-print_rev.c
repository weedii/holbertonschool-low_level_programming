#include "main.h"

/**
 * print_rev - prints a string, followed by a new line
 * @s: pointer point to a string
 */

void print_rev(char *s)
{
	int i, x;

	x = strlen(s);
	for (i = x - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
