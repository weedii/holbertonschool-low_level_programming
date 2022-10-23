#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: returns a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **g, i, j;

	g = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0 || g == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		g[i] = malloc(sizeof(int) * width);

		if (g[i] == 0)
		{
			while (i--)
				free(g[i]);
			free(g);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			g[i][j] = 0;
		}
	}
	return (g);
}