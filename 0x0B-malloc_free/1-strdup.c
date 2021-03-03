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
	int size = sizeof(str);
	char *newstring;

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
