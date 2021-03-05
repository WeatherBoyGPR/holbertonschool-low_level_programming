#include "holberton.h"
#include <stdlib.h>

unsigned int strlenn(char *string);

/**
 *string_nconcat - will concatenate two strings
*@s1: the string to concatenated to
*@s2: the string to be concatednated with
*@n: number of bytes to be copied over from s2
*
*Return: pointer to newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newpoint;
	unsigned int counter;
	unsigned int bytes = 0;
	unsigned int length1;
	unsigned int length2;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	length1 = strlenn(s1);
	length2 = strlenn(s2);

	if (n >= length2)
	bytes = length2;
	else
	bytes = n;

	newpoint = malloc(sizeof(char) * (length1 + bytes + 1));

	if (newpoint == NULL)
	return (NULL);

	for (counter = 0; counter <= length1; counter++)
	{
		newpoint[counter] = s1[counter];
	}
	for (counter = 0; counter < bytes; counter++)
	{
		newpoint[counter + length1] = s2[counter];
	}

	newpoint[length1 + length2 + 1] = '\0';
	return (newpoint);
}

/**
*strlenn - will find the length of a string
*@string: string to be measured
*
*Return: the length of the string, not counting the end null
*/
unsigned int strlenn(char *string)
{
	unsigned int index = 0;

	while (string[index] != '\0')
	index++;

	return (index);
}
