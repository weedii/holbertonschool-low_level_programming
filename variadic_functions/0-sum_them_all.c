#include "variadic_functions.h"

/**
 * sum_them_all - calculate the sum of all its parameters
 * @n: number of numbers to be calculated
 * Return: the sum or 0 on failure
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list countptr;
	unsigned int i;
	int sum = 0;

	if (n != 0)
	{
		va_start(countptr, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(countptr, int);
		}
		return (sum);
		va_end(countptr);
	}
	return (0);
}
