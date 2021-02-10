#include "holberton.h"

/**
 * _islower - determines if character is lowercase
 * @c: entered character
 *
 * Return: true if entered char is lowercase, false otherwise
 */
int _islower(int c)
{
	int result;

	result = 0;
	if (c >= 97 && c <= 122)
	{
		result = 1;
	}
	return (result);
}
