#include <stdlib.h>
#include "function_pointers.h"

/**
*array_iterator - will execute a given function on all elements within an array
*@array: the array to be processed
*@size: the size of the array
*@action: the function to be used
*
*Return: doesn't
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	for (index = 0; index < size; index++)
	action(array[index]);
}
