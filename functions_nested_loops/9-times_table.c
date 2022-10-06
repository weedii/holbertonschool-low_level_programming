#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, r, x, y;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			if (r > 9)
			{
				x = r / 10;
				y = r % 10;
				_putchar(' ');

				_putchar('0' + x);
				_putchar('0' + y);
			}
			else
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + r);
			}
			if (j != 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
