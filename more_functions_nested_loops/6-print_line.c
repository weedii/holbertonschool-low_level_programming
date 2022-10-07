#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the argument
 */

void print_line(int n)
{
	int j, x, count;

	count = 0;
	x = n;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}

	if (x > 0)
	{
		for (j = 0; j <= count; j++)
		{
			_putchar('_');
		}
	}

	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
