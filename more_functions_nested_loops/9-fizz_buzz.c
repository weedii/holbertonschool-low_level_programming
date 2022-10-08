#include "main.h"

/**
 * main - Fizz-Buzz
 * Return: 0
 */

int main(void)
{
	int i = 1;

	while (i < 100)
	{

		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
			if (i == 100)
			{
				continue;
			}
			putchar(' ');
			i++;
		}
		if (i % 3 == 0)
		{
			printf("Fizz");
			if (i == 100)
			{
				continue;
			}
			putchar(' ');
			i++;
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
			if (i == 100)
			{
				continue;
			}
			putchar(' ');
			i++;
		}
		else
		{
			printf("%d", i);
			if (i == 100)
			{
				continue;
			}
			putchar(' ');
			i++;
		}
	}

	putchar('\n');

	return (0);
}
