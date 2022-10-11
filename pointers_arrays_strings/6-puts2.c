#include "main.h"

/**
 * puts2 -prints every other character
 * @str: pointer point to a string
 */

void puts2(char *str)
{
	int i, x;
	char *saut;
	saut = str;

	x = strlen(str);

	for (i = 0; i < x - 1; i += 2)
	{
		while (*saut != '\0')
		{

			if (*saut == 72)
			{
				continue;
			}
			_putchar(*saut);
			saut += 2;
		}
	}
	_putchar('\n');
}
