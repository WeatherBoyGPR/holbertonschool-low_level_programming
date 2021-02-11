#include "holberton.h"

/**
 * print_most_numbers - prints the numbers 0 through 9, except 4 and 2
 *
 * Return: doesn't
 */
void print_most_numbers(void)
{
	int epitaph;

	for (epitaph = 48; epitaph <= 57; epitaph++)
	{
		if (epitaph != 50 && epitaph != 52)
		{
			_putchar(epitaph);
		}
	}
	_putchar('\n');
}
