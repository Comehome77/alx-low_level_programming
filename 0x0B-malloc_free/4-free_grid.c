#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees two dimensional grid
 * @grid: multidimensional array
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
