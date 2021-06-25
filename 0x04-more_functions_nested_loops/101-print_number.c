#include "holberton.h"

/**
 * print_number - will print an integer to standard output
 * @n: the integer to be printed
 *
 * Return: doesn't
 */
void print_number(int n)
{
	int number = n;

	if (number < 0)
	{
		_putchar('-');
		number *= -1;
	}

	if (number >= 1000000000)
		_putchar ((number / 1000000000) + 48);
	if (number >= 100000000)
		_putchar (((number / 100000000) % 10) + 48);
	if (number >= 10000000)
		_putchar (((number / 10000000) % 10) + 48);
	if (number >= 1000000)
		_putchar (((number / 1000000) % 10) + 48);
	if (number >= 100000)
		_putchar (((number / 100000) % 10) + 48);
	if (number >= 10000)
		_putchar (((number / 10000) % 10) + 48);
	if (number >= 1000)
		_putchar (((number / 1000) % 10) + 48);
	if (number >= 100)
		_putchar (((number / 100) % 10) + 48);
	if (number >= 10)
		_putchar (((number / 10) % 10) + 48);
	_putchar ((number % 10) + 48);
}
