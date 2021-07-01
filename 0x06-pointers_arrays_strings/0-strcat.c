#include "holberton.h"

/**
 * _strcat - will concatenate a string to the end of the another
 * @dest: the string to be concatenated to
 * @src: the string to be concatened with
 *
 * Return: a pointer to the finished string
 */
char *_strcat(char *dest, char *src)
{
	int a,  i;
	int l = 1;

	for (i = 0; *(src + i) != '\0'; i++)
		l++;

	for (a = 0; *(dest + a) != '\0'; a++)
		continue;

	for (i = 0; l; l--)
	{
		*(dest + a + i) = src[i];
		i++;
	}

	return (dest);
}
