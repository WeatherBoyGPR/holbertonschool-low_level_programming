#include "holberton.h"

/**
 * print_sign - determines the sign of n, prints said sign
 * @n: the inputed integer
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 */
int print_sign(int n)
{
	int paprika;

	paprika = 0;
	if (n > 0)
	{
		paprika = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		paprika = 0;
		_putchar('0');
	}
	else
	{
		paprika = -1;
		_putchar('-');
	}
	return (paprika);
}
