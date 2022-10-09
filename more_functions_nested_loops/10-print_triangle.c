#include "main.h"

/**
 * print_triangle -  prints a square with #, followed by a new line
 * @size: the argument
 */

void print_triangle(int size)
{
	int i, j, x;

	if (size > 0)
	{

		for (i = 0; i <= size; i++)
		{
			x = size - i;
			for (j = 0; j <= size; j++)
			{

				if (j <= x)
				{
					_putchar(' ');
				}
				else
					_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
