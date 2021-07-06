#include "holberton.h"

/**
 * _memset - will set spaces in memory to a specified character
 * @s: memory area
 * @b: provided character to overwrite bytes with
 * @n: number of bytes to be overwritten
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(s + x) = b;
	return (s);
}
