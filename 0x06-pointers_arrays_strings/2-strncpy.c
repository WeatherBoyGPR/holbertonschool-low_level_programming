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
	int l = 1;

	if (!(dest) || !(src))
		return (0);

	for (i = 0; *(src + i) != '\0'; i++)
		l++;

	for (i = 0; n && l; i++)
	{
		*(dest + i) = src[i];
		l--;
		n--;
	}

	return (dest);
}
