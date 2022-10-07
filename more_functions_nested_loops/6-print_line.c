#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the argument
 */

void print_line(int n)
{
	int i = 0;
	int j, x;

	x = n;

	while (x != 0)
	{
		x = x / 10;
		i++;
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j <= i; j++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
