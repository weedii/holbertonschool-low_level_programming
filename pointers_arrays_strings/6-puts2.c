#include "main.h"

/**
 * puts2 -prints every other character
 * @str: pointer point to a string
 */

void puts2(char *str)
{
	int i, x;

	x = strlen(str);

	for (i = 0; i < x; i++)
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str += 2;
		}
	}
	_putchar('\n');
}
