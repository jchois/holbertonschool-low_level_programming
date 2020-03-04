#include "holberton.h"

/**
 * free_grid - 2 dimensional grid
 * @grid: grid
 * @height: height
 * Return: ptr
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
