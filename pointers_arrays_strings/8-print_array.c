#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer point to a string
 * @n:  the number of elements of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{

		if (i < n - 1)
		{
			printf("%d", a[i]);
			printf(", ");
		}
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
