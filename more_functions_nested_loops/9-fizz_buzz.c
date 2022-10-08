#include "main.h"

/**
 * main - Fizz-Buzz
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i <= 100)
	{
		printf("%d ", i);
		i++;

		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
			i++;
		}
		if (i % 3 == 0)
		{
			printf("Fizz ");
			i++;
		}
		if (i % 5 == 0)
		{
			printf("Buzz ");
			i++;
		}
	}
	putchar('\n');

	return (0);
}
