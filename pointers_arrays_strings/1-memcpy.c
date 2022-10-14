#include "main.h"

/**
 * *_strcat - concatenates two strings
 *@dest: pointer point to a string
 *@src: pointer point to a string
 * Return: concatenates two strings
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }
    return (dest);
}