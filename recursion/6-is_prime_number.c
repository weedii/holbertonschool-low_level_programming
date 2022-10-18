#include "main.h"

/**
 * prime_check - check prime numbers
 * @n: number
 * @i: number for testing
 * Return: 1 or 0
 */

int prime_check(int n, int i)
{
	if (n == 0 || n == 1 || n < 0)
		return (0);

	if (n == i)
		return (1);

	if (n % i == 0)
		return (0);

	else
		return (prime_check(n, i + 1));
}

/**
 * is_prime_number - check prime numbers
 * @n: number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	int i = 2;

	int prime_check(int n, int i);
	return (prime_check(n, i));
}
