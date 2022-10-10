#include "main.h"

/**
 * print_rev - prints a string, followed by a new line
 * @s: pointer point to a string
 */

void rev_string(char *s)
{
    int i, x;
    char *deb, *fin, y;

    x = strlen(s);
    deb = s;
    fin = s;

    for (i = 0; i < x - 1; i++)
    {
        fin++;
    }

    for (i = 0; i < x / 2; i++)
    {
        y = *fin;
        *fin = *deb;
        *deb = y;

        deb++;
        fin--;
    }

    printf("\n");
}
