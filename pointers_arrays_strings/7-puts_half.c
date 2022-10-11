#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer point to a string
 */

void puts_half(char *str)
{
	int i, n, len;

	n = ((strlen(str) - 1) / 2) + 1;
	len = strlen(str);

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
