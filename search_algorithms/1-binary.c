#include "search_algos.h"

/**
 * binary_search - function that searches for a value
 *          in a sorted array of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size:  size of the array
 * @value: is the value to search for
 * Return: the first index where value is located or (-1) on failure
 */

int binary_search(int *array, size_t size, int value)
{
	int low, high, mid, i;

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		printf("Searching in array: %d", array[low]);
		for (i = low + 1; i < high + 1; i++)
			printf(", %d", array[i]);
		printf("\n");

		mid = (low + high) / 2;

		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
