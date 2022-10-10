#include "main.h"

/**
 * print_rev - prints a string, followed by a new line
 * @s: pointer point to a string
 */

void print_rev(char *s)
{
	int i, x;

	x = strlen(s);
	for (i = x; i > 0; i--)
	{
		while (*s > '\0')
		{
			_putchar(*s);
			s++;
		}
	}
	_putchar('\n');
}
