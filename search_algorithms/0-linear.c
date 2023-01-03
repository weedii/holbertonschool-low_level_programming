#include "search_algos.h"

/**
 * linear_search - function that searches for a value
 *      in an array of integers using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size:  size of the array
 * @value: is the value to search for
 * Return: the first index where value is located or (-1) on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array)
	{
		while (i <= size - 1)
		{
			if (value != array[i])
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				i++;
			}
			if (value == array[i])
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				return (i);
			}
		}
	}
	return (-1);
}
