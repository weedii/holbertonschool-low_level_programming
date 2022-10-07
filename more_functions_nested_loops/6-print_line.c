#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the argument
 */

void print_line(int n)
{
	int i = 0;
	int j;

	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	if (i <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j <= i; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
