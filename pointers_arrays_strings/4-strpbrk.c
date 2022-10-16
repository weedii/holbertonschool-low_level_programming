#include "main.h"

/**
 * *_strpbrk - searche a string for any of a set of bytes
 * @s: pointer point to array
 * @accept: zize of the array
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*s == *accept)
		{
			return (s - 1);
		}
		accept++;
		s++;
	}
	return (0);
}
