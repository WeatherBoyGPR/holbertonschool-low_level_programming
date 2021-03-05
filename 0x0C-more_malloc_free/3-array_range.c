#include "holberton.h"
#include <stdlib.h>

/**
*array_range - will create an array to contain min, max, and numbers inbetween
*@max: largest number in the array
*@min: smallest number in the array
*
*Return: pointer to the created array
*/
int *array_range(int min, int max)
{
	int arraysize, holder, index;
	int *newpoint;

	if (min > max)
	return (NULL);

	arraysize = (max - min + 1);

	newpoint = malloc(arraysize * sizeof(int));
	if (newpoint == NULL)
	return (NULL);

	holder = min;

	for (index = 0; index < arraysize; index++)
	{
		newpoint[index] = holder;
		holder++;
	}

	return (newpoint);
}
