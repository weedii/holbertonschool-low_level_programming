#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer point to a string
 */

void puts_half(char *str)
{
	int i, n, len;

	len = strlen(str);

	if (len % 2)
	{
		n = ((strlen(str) - 1) / 2);
	}
	else
	{
		n = ((strlen(str) - 1) / 2) + 1;
	}

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
