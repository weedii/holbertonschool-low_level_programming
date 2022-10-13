#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: pointer point to array
 * @n: zize of the array
 */

void reverse_array(int *a, int n)
{
	int *len, i = 0, tmp;

	len = a + n - 1;

	while ((*len) && (i < n / 2))
	{
		tmp = *a;
		*a = *len;
		*len = tmp;

		a++;
		len--;
		i++;
	}
}
