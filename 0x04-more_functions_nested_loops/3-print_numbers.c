#include "holberton.h"

/**
 * print_numbers - will print numbers from 0 to 9
 *
 * Return: doesn't
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + 48);
	_putchar('\n');
}
