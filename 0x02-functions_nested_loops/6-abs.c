#include "holberton.h"

/**
 * _abs - will compute the absolute value of an integer
 * @int: the entered integer
 *
 * Return: the absolute value of int
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;

	return (n);
}
