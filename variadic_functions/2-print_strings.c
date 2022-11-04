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
	char *as;

	va_start(ch, n);

	for (i = 0; i < n; i++)
	{
		as = va_arg(ch, char *);

		if (separator == NULL)
			separator = "";

		else if (as == NULL)
			printf("(nil)");

		else
		{
			printf("%s", as);
			if (i != n - 1)
				printf("%s", separator);
		}
	}

	putchar('\n');

	va_end(ch);
}
