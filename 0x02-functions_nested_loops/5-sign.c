#include "holberton.h"

/**
 * print_sign - will print the entered number's sign
 * @n: the number to be processed
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	if (!n)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('-');
	return (-1);
}
