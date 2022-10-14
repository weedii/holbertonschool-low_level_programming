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
    int j;

    i = &dest[50];

    for (j = n; j > 0 && i; j--)
    {
        dest[j] = src[j];
    }
    return (dest);
}