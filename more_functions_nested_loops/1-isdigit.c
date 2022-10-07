#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * Return: 0 or 1
 * @c: the argument
 */

int _isdigit(int c)
{
	if (0 <= c && 9 >= c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
