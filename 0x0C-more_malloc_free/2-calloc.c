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
	char *lacrime;
	unsigned int counter = 0;
	unsigned int total = (nmemb * size);

	if (nmemb == 0 || size == 0)
	return (NULL);

	lacrime = malloc(total);

	if (lacrime == NULL)
	return (NULL);

	while (counter < (total / sizeof(char)))
	{
		lacrime[counter] = 0;
		counter++;
	}

	return (lacrime);
}
