#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer point to a string
 * @b: string will be printed
 * @n: bytes of the memory area pointed to by s with the constant byte b
 * Return: fills memory with a constant byte.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = n; i > 0; i--)
	{
		*s = b;
		s++;
	}
	return (s);
}
