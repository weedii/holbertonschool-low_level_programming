#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the argument
 */

void print_diagonal(int n)
{

	int i = 0, j = 0;

	if (n > 0)
	{
		while (i < n)
		{
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
			j = 0;
		}
	}
	else
		_putchar('\n');
}
