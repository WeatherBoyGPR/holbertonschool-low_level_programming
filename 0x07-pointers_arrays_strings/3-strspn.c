#include "holberton.h"

/**
 * _strspn - will get the length of a prefix substring
 * @s: string to search through
 * @accept: bytes to check for
 *
 * Return: number of bytes in start of s that contain bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, c;
	unsigned int result = 0;

	for (x = 0; *(s + x) != '\0'; x++)
	{
		c = 0;
		for (y = 0; *(accept + y) != '\0'; y++)
		{
			if (*(s + x) == *(accept + y))
			c++;
		}
		if (!c)
			break;
		result++;
	}

	return (result);
}
