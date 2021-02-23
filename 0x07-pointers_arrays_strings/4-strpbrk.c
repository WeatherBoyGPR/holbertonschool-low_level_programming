#include "holberton.h"

/**
 *_strpbrk -locates first occurence of any byte in accept within s
 *@s: The string to be scanned through
 *@accept: the bytes that are being looked for
 *
 *Return: pointer to s
 */
char *_strpbrk(char *s, char *accept)
{
	int index2;

	while (*s != '\0')
	{
		index2 = 0;
		while (accept[index2] != '\0')
		{
			if (*s == accept[index2])
			{
				return (s);
			}
			index2++;
		}
		s++;
	}
	return (0);
}
