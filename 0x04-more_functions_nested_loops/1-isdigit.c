#include "holberton.h"

/**
 * _isdigit - will check if an entered character value is a digit
 * @c: the entered character value
 *
 * Return: 1 if a digit is entered, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
