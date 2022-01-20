#include "search_algos.h"

/**
 * linear_search - searches through array using linear search
 * @array: array to search through
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of first instance, -1 on error
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
