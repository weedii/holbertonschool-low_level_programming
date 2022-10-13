#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: pointer point to array
 * @n: zize of the array
 */

char *string_toupper(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (*s >= 'a' && *s <= 'z')
        {
            *s = *s - 32;
        }
    }
    return (s);
}
