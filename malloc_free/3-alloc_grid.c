#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: returns a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **g, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
		g[i] = malloc(sizeof(int) * width);

	return (g);
}
