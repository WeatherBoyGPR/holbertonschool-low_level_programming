#include "holberton.h"

/**
 * _islower - checks for lowercase lettering
 *
 * Return: a if lowercase, 0 otherwise
 */
int _islower(int c)
{
	int a = 0;

	if (c >= 97 && c <= 122)
		a++;

	return (a);
}
