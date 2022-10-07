#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i, j, x, y;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				x = j / 10;
				y = j % 10;

				_putchar('0' + x);
				_putchar('0' + y);
			}
			else
			{
				_putchar('0' + j);
			}
		}
		_putchar('\n');
	}
}
