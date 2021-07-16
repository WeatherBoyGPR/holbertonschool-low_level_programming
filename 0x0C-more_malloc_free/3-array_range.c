#include "holberton.h"

/**
 * array_range - will create an array holding every integer between two numbers
 * @min: lowest number in the array
 * @max: highest number in the array
 *
 * Return: pointer to the completed array
 */
int *array_range(int min, int max)
{
	int *res;
	int i;

	if (min > max)
		return (NULL);

	res = malloc((max - min + 1) * sizeof(int));
	if (!res)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		*(res + i) = min;
		min++;
	}

	return (res);
}
