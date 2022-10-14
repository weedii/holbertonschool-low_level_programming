#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer point to an int
 * @b: pointer point to an int
 */

char _strchr(char *s, char c)
{
    while (*s != '\0')
    {
        if (c == *s)
        {
            return (*s);
        }
        else
            *s = NULL;

        s++;
    }
    return (*s);
}