#include "search_algos.h"

/**
 * binary_search - will perform binary search on an array
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value, -1 on error
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, j, up, lo;

	i = 0, up = (size - 1), lo = 0;
	if (!array)
		return (-1);
	while (up >= lo)
	{
		i = (up + lo) / 2;

		printf("Searching in array: ");
		for (j = lo; j <= up; j++)
			if (j + 1 <= up)
				printf("%d, ", array[j]);
			else
				printf("%d\n", array[j]);

		if (array[i] == value)
			return (i);
		else if (array[i] < value)
			lo = i + 1;
		else if (array[i] > value)
			up = i - 1;
	}

	return (-1);
}
