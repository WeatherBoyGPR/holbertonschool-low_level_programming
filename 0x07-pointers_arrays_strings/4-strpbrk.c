#include "holberton.h"

/**
 * _strpbrk - will search through a string for any byte in accept
 * @s: string to search through
 * @accept: bytes to check for
 *
 * Return: a pointer to the matching byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
				return (s + x);
		}
	}

	return ('\0');
}
