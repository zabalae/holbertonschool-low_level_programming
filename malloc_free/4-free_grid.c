#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid to free
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height == 0)
	{
		return;
	}

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}
