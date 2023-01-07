#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted array
 *              of integers using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size:  size of the array
 * @value: is the value to search for
 * Return: the first index where value is located or (-1) on failure
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), prev = 0, i = 0;

	if (array == NULL)
		return (-1);

	while (array[step] <= value && step < size - 1)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[step] == value)
			break;

		i = step;
		step += sqrt(size);

		if (array[step] > value)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (step >= size - 1)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			break;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, step);

	for (prev = i; prev < step; prev++)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
