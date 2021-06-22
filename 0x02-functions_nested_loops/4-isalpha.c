#include "holberton.h"

/**
 * _isalpha - checks for lettering
 * @c: the entered value
 *
 * Return: 1 if letter, 0 otherwise
 */
int _isalpha(int c)
{
	int a = 0;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		a++;

	return (a);
}
