#include "holberton.h"

/**
 * _strlen - will find the length of the string
 * @s: a pointer to the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	if (s && *s)
	{
		for (i = 0; *(s + i) != '\0'; i++)
			continue;
	}

	return (i);
}
