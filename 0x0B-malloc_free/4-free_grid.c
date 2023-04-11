#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2-d grid
 * @grid: 2-d grid being freed
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int x;

	free(grid);
	for (x = 0; x < height; x++)
		free(grid[x]);
}
