#include "holberton.h"

/**
 * free_grid - will free a malloced grid
 * @grid: grid to free
 * @height: height of the grid
 *
 * Return: doesn't
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
