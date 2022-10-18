#include "main.h"

/**
 * _sqrt_x - return the natural square root of a number to _sqrt_recursion
 * @n: number
 * @i: number for testing
 * Return:  return the natural square root of a number
 */
int _sqrt_x(int n, int i)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	if (i < n)
	{
		if (i * i == n)
		{
			return (i);
		}
		else if (i * i > n)
			return (-1);
		else
			return (_sqrt_x(n, i + 1));
	}
	return (-_sqrt_x(n, i));
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number
 * Return: return the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (_sqrt_x(n, i));
}
