#include "main.h"

/**
 * print_last_digit -  print the last digit of a number
 * Return: return the last digit of a number
 * @n: the argument
 */

int print_last_digit(int n)
{
	int y = (n % 10);

	if (y < 0)
	{
		y = y * -1;
	}
	_putchar('0' + y);
	return (0);
}
