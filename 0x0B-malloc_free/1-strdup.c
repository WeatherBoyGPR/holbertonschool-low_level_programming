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
	int size = 0;
	char *newstring;

/*used to get length of str*/
	while (str[size] != '\0')
	{
		size++;
	}

	newstring = malloc(sizeof(char) * (size + 1));

	if (newstring == NULL)
	{
		return (NULL);
	}

	while (str[counter] != '\0')
	{
		newstring[counter] = str[counter];
		counter++;
	}
	return (newstring);
}
