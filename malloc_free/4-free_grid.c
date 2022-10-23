#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: returns a pointer to a 2 dimensional array of integers
 */

void free_grid(int **grid, int height)
{
    int i;

    for (i = 0; i < height; i++)
        free(grid[i]);
    free(grid);
}