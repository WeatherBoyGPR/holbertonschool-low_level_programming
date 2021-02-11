#include "holberton.h"

/**
 * print_numbers - prints the numbers 0 through 9
 *
 * Return: doesn't
 */
void print_numbers(void)
{
	int epitaph;

	for (epitaph = 48; epitaph <= 57; epitaph++)
	{
		_putchar(epitaph);
	}
	_putchar('\n');
}
