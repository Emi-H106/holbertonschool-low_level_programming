#include <stdlib.h>
#include "main.h"


/**
 * free_grid - frees a 2 dimensional grid previously created
 *             by alloc_grid
 * @grid: : The 2D array of integers to be freed
 * @height: The height of the grid
 * Return: void
 */


void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
