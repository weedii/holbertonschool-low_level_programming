#include "main.h"

/**
 * array_range - creates an array of integers
 * @min:   value of minimum
 * @max:   value of maximum
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max * 2));

	if (p == NULL)
		return (NULL);
	i = min;
	while (i < max)
	{
		*p = i;
		i++;
	}

	return (p);
}
