#include "holberton.h"

/**
 * _strchr - will scan an inputted string for a specified character
 * @s: string to be searched through
 * @c: character to be searched for
 *
 * Return: a pointer to the first instance of c, otherwise NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}

	return (s);
}
