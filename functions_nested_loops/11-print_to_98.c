#include "main.h"

/**
 * print_to_98 -  print the last digit of a number
 * @n: the argument
 */

void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{

				printf("%d", i);
				printf(",");
				printf(" ");
			}
			else
			{

				printf("%d", i);
			}
		}
		printf("\n");
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{

				printf("%d", i);
				printf(",");
				printf(" ");
			}
			else
			{

				printf("%d", i);
			}
		}
		printf("\n");
	}
}
