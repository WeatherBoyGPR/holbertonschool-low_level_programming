#include "holberton.h"

/**
 * print_diagonal - will print a diagonal
 * @n: size of diagonal
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int x, y;

	x = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (y = 0; y < n; y++)
	{
		for (x = 0; x < y; x++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
