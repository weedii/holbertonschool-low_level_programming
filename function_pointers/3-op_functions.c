#include "3-calc.h"

/**
 * op_add - calculate the sum of a and b
 * @a: number of a
 * @b: number of b
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate the difference of a and b
 * @a: number of a
 * @b: number of b
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculate the product of a and b
 * @a: number of a
 * @b: number of b
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculate the division of a by b
 * @a: number of a
 * @b: number of b
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	if (b > 0)
		return (a / b);
	return (0);
}

/**
 * op_mod - calculate the modulo of a by b
 * @a: number of a
 * @b: number of b
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b > 0)
		return (a % b);
	return (0);
}
