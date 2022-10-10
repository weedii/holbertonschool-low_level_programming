#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer point to a string
 * Return: the length of a string
 */

void _puts(char *str)
{
    int i;

    for (i = 0; i < _strlen(str); i++)
    {
        while (*str != '\0')
        {
            _putchar(*str);
            str++;
        }
    }
    _putchar('\n');
}