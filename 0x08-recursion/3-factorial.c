#include "holberton.h"

/**
 * factorial - will find the factorial for n
 * @n: number to be processed
 *
 * Return: the factorial for n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || !n)
		return (1);
	return (n * factorial(n - 1));
}
