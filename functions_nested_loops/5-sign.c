#include "main.h"

/**
 * print_sign -  print the sign of a number
 * Return: 0 or 1
 * 'c': the argument
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
}
