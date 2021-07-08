#include "holberton.h"


/**
 * _sqrt_recursion - will find the square root of a number through recursion
 * @n: number to process
 *
 * Return: square root of the number
 */
int _sqrt_recursion(int n)
{
	return (process(1, n));
}

/**
 * process - will actually find square root
 * @n: number to be incremented to find square root
 * @tar: target square
 *
 * Return: square root of tar
 */
int process(int n, int tar)
{
	if ((n * n) == tar)
		return (n);
	if ((n * n) > tar)
		return (-1);
	else
		return (process(n + 1, tar));
}
