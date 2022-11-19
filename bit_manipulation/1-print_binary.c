#include "main.h"

/***/

void print_binary(unsigned long int n)
{
    int c, result;

    for (c = 10; c >= 0; c--)
    {
        result = n >> c;

        if (result & 1)
            _putchar('0' + 1);
        else
            _putchar('0' + 0);
    }

    printf("\n");
}