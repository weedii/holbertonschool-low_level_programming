#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer point to an int
 * @b: pointer point to an int
 */

void swap_int(int *a, int *b)
{
	int x;
	x = *a;
	*a = *b;
	*b = x;
}
