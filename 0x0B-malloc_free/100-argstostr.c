#include "holberton.h"

/**
 * argstostr - will concatenate all arguments
 * @ac: number of arguments
 * @av: the arguments to process
 *
 * Return: the resulting string
 */
char *argstostr(int ac, char **av)
{
	int n, y, x, l = 0;
	char *str;

	if (!av || ac <= 0)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		if (!(*(av + n)))
			return (NULL);
		l += _strlen(*(av + n));
	}
	str = malloc((sizeof(char) * l) + ac + 1);

	if (!str)
		return (NULL);

	n = 0;
	for (y = 0; y < ac; y++)
	{
		for (x = 0; *(*(av + y) + x) != '\0'; x++)
		{
			*(str + n) = *(*(av + y) + x);
			n++;
		}
		*(str + n) = '\n';
		n++;
	}
	*(str + n) = '\0';

	return (str);
}

/**
 * _strlen - finds the length of a string
 * @c: string to process
 *
 * Return: length of string not including \0
 */
int _strlen(char *c)
{
	int l;

	for (l = 0; *(c + l) != '\0' && c; l++)
		continue;

	return (l);
}
