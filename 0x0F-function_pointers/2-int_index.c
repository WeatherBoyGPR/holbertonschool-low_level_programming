#include "function_pointers.h"

/**
 * int_index - will parse through an array for an integer
 * @array: array to parse through
 * @size: size of array
 * @cmp: function to compare values with
 *
 * Return: index of first integer, -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
		for (i = 0; i < size; i++)
			if (cmp(*(array + i)))
				return (i);
	return (-1);
}
