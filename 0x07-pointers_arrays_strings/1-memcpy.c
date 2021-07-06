#include "holberton.h"

/**
 * _memcpy - will copy a specified number of bytes from one string to another
 * @dest: string to copy to
 * @src: string to be copied from
 * @n: number of bytes to be overwritten
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		*(dest + x) = *(src + x);

	return (dest);
}
