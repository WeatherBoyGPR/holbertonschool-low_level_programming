#include "holberton.h"

/**
 * _isalpha - determines if character is alphabetic
 * @c: entered character
 *
 * Return: true if entered char is alphabetic, false otherwise
 */
int _isalpha(int c)
{
	int result;

	result = 0;
	if (c >= 97 && c <= 122)
	{
		result = 1;
	}
	else if (c >= 65 && c <= 90)
	{
		result = 1;
	}
	return (result);
}
