#include "holberton.h"

/**
 * _isupper - will check if a character is uppercase
 * @c: character to check
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return(1);
	return (0);
}
