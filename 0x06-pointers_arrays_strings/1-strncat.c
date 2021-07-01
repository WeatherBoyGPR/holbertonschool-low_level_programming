#include "holberton.h"

/**
 * _strncat - will concatenate two strings up to a specified number of bytes
 * @dest: destination string
 * @src: string to be taken from
 * @n: maximum number of bytes to be printed
 *
 * Return: pointer to dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a,  i, l;

	l = 0;

	for (i = 0; *(src + i) != '\0'; i++)
		l++;
	l++;

	for (a = 0; *(dest + a) != '\0'; a++)
		continue;

	for (i = 0; n && l; i++)
	{
		*(dest + a + i) = src[i];
		l--;
		n--;
	}

	return (dest);
}
