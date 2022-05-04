#include "search_algos.h"
#include <math.h>

/**
 * jump_search - will perform jump search on a sorted array
 * @array: array to search through
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of search value, -1 on error
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0, s;
	char *format1 = "Value checked array[%d] = [%d]\n";
	char *format2 = "Value found between indexes [%d] and [%d]\n";

	s = sqrt(size);

	if (array != NULL)
	{
		while (array[j] < value && j < size)
		{
			printf(format1, j, array[j]);
			i = j, j += s;
		}
		printf(format2, i, j);
		while (i <= j && i < size)
		{
			printf(format1, i, array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}
	}
	return (-1);
}
