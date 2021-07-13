#include "holberton.h"

/**
 * create_array - will create an array and initialize it with a character
 * @size: size of the array
 * @c: character to initialize array with
 *
 * Return: pointer to created array
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	if (!size)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (!str)
		return (NULL);
	while (size)
	{
	*(str + size) = c;
	size--;
	}
	*str = c;

	return (str);
}
