#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: 2D array of integers.
 * @height: number of rows.
 *
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL)
	{
		while (height >= 0)
		{
			if (grid[height] != NULL)
				free(grid[height]);
			height--;
		}
		free(grid);
	}
}
