#include "search_algos.h"

/**
 * linear_search - Will perform a linear search on an array
 * @array: array to search through
 * @size: size of the array
 * @value: value to return index of
 *
 * Return: index on success, -1 on error
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	char *format = "Value checked array[%d] = [%d]\n";

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf(format, i, array[i]);
		if (array[i] == value)
			break;
	}
	if (size == i)
		i = -1;
	return (i);
}
