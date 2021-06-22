#include "holberton.h"

/**
 * print_alphabet_x10 - will print the lowercase alphabet ten times
 *
 * Return: doesn't
 */
void print_alphabet_x10(void)
{
	char i, c;
	for (c = 0; c <= 9; c++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
