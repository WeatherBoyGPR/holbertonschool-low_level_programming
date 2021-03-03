#include "holberton.h"
#include <stdlib.h>

/**
*create_array - will create an array using malloc
*@size: the size of the array to be created
*@c: the character that the array will be initialized with
*
*Return: a pointer to the created array, alternatively NUll if size is zero
*/
char *create_array(unsigned int size, char c)
{
	char *lucy;
	unsigned int counter;

	if (size == 0)
		return (NULL);

	lucy = malloc(sizeof(char) * size);

	if (lucy == NULL)
	{
		return (NULL);
	}

	for (counter = 0; counter < size; counter++)
	{
		lucy[counter] = c;
	}

	return (lucy);
}
