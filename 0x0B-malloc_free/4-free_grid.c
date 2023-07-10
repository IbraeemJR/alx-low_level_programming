#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees the memory allocated for a 2D grid
 * @grid: Pointer to the grid
 * @height: Height of the grid
 *
 * Description:Free the memory of a previously allocated 2D grid.
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
