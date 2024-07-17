#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees array created using alloc_grid.
 * @grid: array to be freed.
 * @height: height of array.
 *
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
