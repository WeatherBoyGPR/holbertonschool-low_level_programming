#include "holberton.h"

/**
 * _strlen - will find the length of the string
 * @s: a pointer to the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	if (s && *s)
	{
		while (*(s + i) != '\0')
			i++;
	}

	return (i);
}
