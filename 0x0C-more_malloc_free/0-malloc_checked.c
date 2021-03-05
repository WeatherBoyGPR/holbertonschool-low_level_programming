#include "holberton.h"
#include "stdlib.h"

/**
*malloc_checked -allocates memory
*@b: amount of space to be allocated
*
*Return: pointer to allocated space
*/
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	exit(98);

	else
	return (pointer);
}
