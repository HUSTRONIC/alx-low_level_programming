#include <stdio.h>

#include <stdlib.h>

#include "main.h"

/**
 * free_grid - function that frees a
 * 2 dimensional grid previously created
 * @grid: two dimensional grid
 * @height: height dimension of grid
 * Description: free memory
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
