#include "main.h"

/**
 * _islower -  checks for lowercase character
 * Return: 0 or 1
 * @c:: the argument
 */

int _islower(int c)
{
	if (islower(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
