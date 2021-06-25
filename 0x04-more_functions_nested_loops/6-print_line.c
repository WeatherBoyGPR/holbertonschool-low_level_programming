#include "holberton.h"

/**
 * Will print a line of the length specified by length
 * @n: length of the line to be printed
 *
 * Return: doesn't
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
