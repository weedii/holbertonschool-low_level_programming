#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: type of variable to be printed
 */

void print_all(const char *const format, ...)
{
	va_list ch;
	int i;
	char *as, *separator = "";

	va_start(ch, format);
	if (format)
	{
		i = 0;
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(ch, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(ch, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ch, double));
				break;
			case 's':
				as = va_arg(ch, char *);
				if (as == NULL)
					as = ("(nil)");

				printf("%s%s", separator, as);
				break;
			default:
				i++;
				continue;
			}
			i++;
			separator = ", ";
		}
		va_end(ch);
	}
	putchar('\n');
}
