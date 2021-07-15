#include "holberton.h"

/**
 * string_nconcat - will concatenate n bytes from s2 to s1
 * @s1: the first sting to concatenate
 * @s2: the second string to concatenate
 * @n: number of bytes to concatenate
 *
 * Return: a pointer to the new string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i = 0;

	if (!s1 || !s2)
		return (NULL);

	res = malloc(sizeof(s1) + sizeof(s2) - 1);
	if (!res)
		return (NULL);

	while (*s1 != '\0')
	{
		*(res + i) = *s1;
		i++;
		s1++;
	}

	while (*s2 != '\0' && n)
	{
		*(res + i) = *s2;
		s2++;
		n--;
		i++;
	}

	*(res + i) = '\0';

	return (res);
}
