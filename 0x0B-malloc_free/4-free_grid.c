#include "main.h"

/**
 * free_grid - frees a 2 dimensional array
 * @grid: the grid to be freed
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
