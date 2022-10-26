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

	if (min == max)
		return (min);

	p = malloc(sizeof(int) * (max + max));

	if (p == NULL)
		return (NULL);

	for (i = min; i < max; i++)
		p[i] = i;

	return (p);
}
