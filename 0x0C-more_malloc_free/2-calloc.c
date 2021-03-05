#include "holberton.h"
#include <stdlib.h>

/**
*_calloc - will allocate memory for an array
*@nmemb: number of elements in the array
*@size: size of each element
*
*Return: pointer to alloacted memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *lacrime;
	unsigned int counter;

	if (nmemb == 0 || size == 0)
	return (NULL);

	lacrime = malloc(size * nmemb);

	if (lacrime == NULL)
	return (NULL);

	for (counter = 0; counter < size; counter++)
	{
		lacrime[counter] = 0;
	}

	return (lacrime);
}
