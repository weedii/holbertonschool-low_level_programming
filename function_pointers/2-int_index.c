#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to the array
 * @size:  size of the array
 * @cmp:   pointer to the function to be used to compare values
 * Return: returns the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != 0)
	{
		while (i < size)
		{
			if ((*cmp)(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
