#include "main.h"

/**
 * *_strcat - concatenates two strings
 *@dest: pointer point to a string
 *@src: pointer point to a string
 * Return: concatenates two strings
 */

char *_strncat(char *dest, char *src, int n)
{
    int i, j;

    for (i = 0; dest[i] != '\0'; i++)
        ;

    for (j = 0; src[j] != '\0' && j < n; j++)
    {
        dest[i + j] = src[j];
    }

    return (dest);
}
