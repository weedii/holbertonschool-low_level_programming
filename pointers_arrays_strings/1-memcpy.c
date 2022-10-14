#include "main.h"

/**
 * *_strcat - concatenates two strings
 *@dest: pointer point to a string
 *@src: pointer point to a string
 * Return: concatenates two strings
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *i;

    i = &dest[50];

    while (n-- && i)
    {
        *dest = *src;
        dest++;
        src++;
        i++;
    }
    return (dest);
}