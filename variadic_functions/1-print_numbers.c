#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: separator
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;
	int number;

	va_start(x, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(x, int);

		if (separator != NULL)
		{
			if (i != n - 1)
				printf("%d%s", number, separator);
			else
				printf("%d", number);
		}

		else if (separator == NULL && number != 0)
			printf("%d", number);
	}

	putchar('\n');

	va_end(x);
}
