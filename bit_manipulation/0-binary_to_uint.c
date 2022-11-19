#include "main.h"

/**
 * binary_to_uint - function that converts binary number to unsigned int
 * @b:     binary in string
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, x = 1, len;
	int i;

	if (!b)
		return (0);

	len = strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			res += x;
		x *= 2;
	}
	return (res);
}
