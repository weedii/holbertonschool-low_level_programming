#include "main.h"

/**
 * _isalpha -  checks for alphabetic character
 * Return: 0 or 1
 * 'c': the argument
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
