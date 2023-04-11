#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimentsional grid
 * @grid: one of the argument for the func
 * @height: the second argument
 * Return: void
 */

void free_grid(int **grid, int height);
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	gree(grid);
}

