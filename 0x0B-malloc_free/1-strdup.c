#include "holberton.h"

/**
 * _strdup - will malloc a space in memory and copy a string to it
 * @str: string to copy
 *
 * Return: a pointer pointing to the created string
 */
char *_strdup(char *str)
{
	int l = 1, i = 0;
	char *cpy;

	if (str == NULL)
		return (NULL);

	while (*(str + l) != '\0')
		l++;

	cpy = malloc((sizeof(char) * l) + 1);
	if (cpy == NULL)
		return (NULL);
	do {
		*(cpy + i) = *(str);
		i++;
		str++;
	} while (*(str - 1) != '\0');

	return (cpy);
}
