#include "main.h"

/**
 * print_to_98 -  print the last digit of a number
 * @n: the argument
 */

void print_to_98(int n)
{
	int i, j;

	i = n;
	j = n;

	if (n > 0)
	{
		while (i <= 98)
		{
			printf("%d, ", i);
			i++;
		}
		_putchar('\n');
	}
	else
	{
		while (j <= 98)
		{
			printf("%d, ", j);
			j++;
		}
		}
}