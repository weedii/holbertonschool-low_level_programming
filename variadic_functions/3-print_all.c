#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: type of variable to be printed
 */

void print_all(const char *const format, ...)
{
	va_list ch;
	int i;

	va_start(ch, format);

	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c ", va_arg(ch, int));
			break;
		case 'i':
			printf("%d ", va_arg(ch, int));
			break;
		case 'f':
			printf("%f ", va_arg(ch, double));
			break;
		case 's':
			if (va_arg(ch, char *) != NULL)
			{
				printf("%s ", va_arg(ch, char *));
				break;
			}
			printf("(nil) ");
			break;
		default:
			break;
		}
		i++;
	}
	va_end(ch);
	putchar('\n');
}
