#include "holberton.h"

/**
 * print_times_table - will print n times table
 * @n: the times table to be printed
 *
 * Return: doesn't
 */
void print_times_table(int n)
{
	int x, y;

	if (n > 15 || !n)
		return;

	for (y = 0; y <= n; y++)
	{
		for (x = 0; x <= n; x++)
		{
			if ((x * y) >= 1000)
				_putchar((((x * y) / 1000) % 10) + '0');
			else if (x)
				_putchar(' ');
			if ((x * y) >= 100)
				_putchar((((x * y) / 100) % 10) + '0');
			else if (x)
				_putchar(' ');
			if ((x * y) >= 10)
				_putchar((((x * y) / 10) % 10) + '0');
			else if (x)
				_putchar(' ');
			_putchar(((x * y) % 10) + '0');
			if (x != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
