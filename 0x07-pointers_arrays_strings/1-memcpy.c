#include "holberton.h"

/**
 *_memcpy - copies memory area
 *@dest: points to target memory area
 *@src: where memory will be copied from
 *@n: number of bytes to be copied
 *
 *Return: A pointer to the memory area known as s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int incre;

	for (incre = 0; incre < n; incre++)
	{
		dest[incre] = src[incre];
	}
	return (dest);
}
