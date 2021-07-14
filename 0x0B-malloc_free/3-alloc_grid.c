#include "holberton.h"

/**
 * alloc_grid - will malloc a two dimensional array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: a pointer to the created 2d array
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **res;

	if (width <= 0 || height <= 0)
		return (NULL);
	res = malloc(sizeof(int *) * height);
	if (!res)
		return (NULL);
	for (y = 0; y < height; y++)
	{
		*(res + y) = malloc(width * sizeof(int));
		if (!(*(res + y)))
			return (NULL);
	}

	for (y = 0; y < height; y++)
		for (x = 0; x < width; x++)
			res[0][0] = 0;

	return (res);
}
