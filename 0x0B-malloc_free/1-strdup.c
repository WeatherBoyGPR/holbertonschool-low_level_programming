#include <stdlib.h>
#include "holberton.h"

/**
*_strdup - will copy over a string to a newly created string
*@str: the string to be copied
*
*Return: a pointer to the newly created string;
*/
char *_strdup(char *str)
{
	int counter = 0;
	int size = 1;
	char *newstring;

/*used to get size of str*/
	while (str[size] != '\0')
	{
		size++;
	}

	newstring = malloc(size);

	if (newstring == NULL)
	{
		return (NULL);
	}

	while (counter <= size)
	{
		newstring[counter] = str[counter];
		counter++;
	}
	return (newstring);
}
