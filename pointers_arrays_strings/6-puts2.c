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
	i = 0;

	while ((*saut != '\0') && (i <= x - 1))
	{
		if ((*saut == 46) && (*saut == 92) && (*saut != 48))
		{
			continue;
		}

		_putchar(*saut);
		saut += 2;
		i++;
	}

	_putchar('\n');
}
