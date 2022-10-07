#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the argument
 */

void print_line(int n)
{
	int i = 0;
	int j, x;

	for (i = 0; i <= n; i++)
	{

		if (n <= 0)
		{
			_putchar('\n');
		}
		x = i;
	}
	for (j = 0; j <= x; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
