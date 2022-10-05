#include "main.h"

/**
 * print_last_digit -  print the last digit of a number
 * Return: return the last digit of a number
 * @n: the argument
 */

void print_to_98(int n)
{

	while (n <= 98)
	{
		_putchar('0' + n);
		if (n == 98)
		{
			break;
		}
		_putchar(',');
		_putchar(' ');
		n++;
	}

	while (n >= 98)
	{
		_putchar('0' + n);
		if (n == 98)
		{
			break;
		}
		_putchar(',');
		_putchar(' ');
		n++;
	}
}