#include <stdlib.h>
#include "function_pointers.h"

/**
*int_index - will search through an array for a specified number
*@array: the aray to be searched through
*@size: the size of the array
*@cmp: the comparison function
*
*Return: Index to first instance of specified number, -1 if error
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	int temp = 0;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size && temp == 0; index++)
	{
		temp = cmp(array[index]);
	}

	if (temp == 0)
		return (-1);
	else
		return (index - 1);
}
