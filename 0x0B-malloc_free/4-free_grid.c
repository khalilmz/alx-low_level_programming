#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free up the memory of a 2d array
 * @grid: target memory to free
 * @height: size of array.
 *
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
