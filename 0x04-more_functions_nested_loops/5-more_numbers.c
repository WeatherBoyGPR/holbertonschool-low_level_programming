#include "holberton.h"

/**
 * more_numbers - will print numbers 0 to 14 ten times
 *
 * Return: doesn't
 */
void more_numbers(void)
{
	int x, y;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
				_putchar((x / 10) + 48);
			_putchar((x % 10) + 48);
		}
		_putchar('\n');
	}
}
