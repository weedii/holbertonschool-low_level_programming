#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: separator
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ch;
	unsigned int i;

	va_start(ch, n);
	for (i = 0; i < n; i++)
	{
		if (ch != NULL)
		{
			printf("%s", va_arg(ch, char *));
			if (i != n - 1)
				printf("%s", separator);
		}

		else
			printf("nil");
	}
	putchar('\n');
	va_end(ch);
}
