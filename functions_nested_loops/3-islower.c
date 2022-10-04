#include "main.h"

/**
 * _islower -  checks for lowercase character
 * Return: 0 or 1
 * c islower
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
