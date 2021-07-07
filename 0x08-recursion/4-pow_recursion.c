#include "holberton.h"

/**
 * _pow_recursion - will raise x to the power of y using recursion
 * @x: number to be processed
 * @y: represents the exponent
 *
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y < 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
