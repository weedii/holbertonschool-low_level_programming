#include "main.h"

/**
 * print_number - prints an integer
 * @n: the argument
 */

void print_number(int n)
{
	int t[50], i, j = 0;

	while (n % 10)
	{
		j++;
		n = n / 10;
	}

	for (i = 0; i < j; i++)
	{
		if (n < 0)
		{
			_putchar('-');
			t[i] = -n;
			_putchar('0' + t[i]);
		}

		if (n / 10)
		{
			t[i] = n % 10;
			n = n / 10;
		}
		_putchar('0' + t[i]);
	}
}
