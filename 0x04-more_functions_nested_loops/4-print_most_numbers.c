#include "holberton.h"

/**
 * print_most_numbers - will print numbers from 0 to 9 except 4 and 2
 *
 * Return: doesn't
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + 48);
	}
	_putchar('\n');
}
