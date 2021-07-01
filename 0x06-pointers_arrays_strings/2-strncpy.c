#include "holberton.h"

/**
 * _strncpy - will copy a string to a destination buffer
 * @dest: destination string
 * @src: string to be copied from
 * @n: maximum number of bytes to be copied
 *
 * Return: pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (!(dest) || !(src))
		return (0);

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		*(dest + i) = src[i];
	}

	for (; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
