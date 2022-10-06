#include "main.h"

/**
 * print_last_digit -  print the last digit of a number
 * Return: return the last digit of a number
 * @n: the argument
 */

void print_to_98(int n)
{
	int i, j;

	if (n > 0)
	{
		for (; i <= 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (; j <= 98; j--)
		{
			printf("%d, ", j);
		}
	}
}