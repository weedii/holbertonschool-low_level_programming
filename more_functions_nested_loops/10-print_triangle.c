#include "main.h"

/**
 * print_square -  prints a square with #, followed by a new line
 * @size: the argument
 */

void print_triangle(int size)
{
    int i, j;

    if (size > 0)
    {

        for (i = size; i > 0; i--)
        {
            for (j = i; j > 0; j--)
            {
                _putchar('#');
            }
            _putchar(' ');
            _putchar('\n');
        }
        _putchar('\n');
    }
    else
        _putchar('\n');
}