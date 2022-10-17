#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: pointer to a number
 * Return: returns the factorial of a given number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	else
	{
		return (n * factorial(n - 1));
	}
}
