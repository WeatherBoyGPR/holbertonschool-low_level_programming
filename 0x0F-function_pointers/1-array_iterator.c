#include "function_pointers.h"

/**
 * array_iterator - will call a function on every element in an array
 * @array: array to call the function on
 * @size: size of the array
 * @action: function to call
 *
 * Return: doesn't
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action && size)
		for (i = 0; i < size; i++)
			action(*(array + i));
}
