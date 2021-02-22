#include "holberton.h"

/**
 *_memset - fills memory with a constant byte
 *@s: points to target memory area
 *@b: constant byte that area will be filled with
 *@n: number of bytes to be filled
 *
 *Return: A pointer to the memory area known as s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int incre;

	for (incre = 0; incre < n; incre++)
	{
		s[incre] = b;
	}
	return (s);
}
