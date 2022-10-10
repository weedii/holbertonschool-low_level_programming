#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: pointer point to a string
 */

void _puts(char *str)
{
	int i, x;

	x = strlen(str);
	for (i = 0; i < x; i++)
	{
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
	}
	_putchar('\n');
}
