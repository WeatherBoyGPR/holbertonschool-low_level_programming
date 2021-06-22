#include "holberton.h"

/**
 * print_alphabet - will print the lowercase alphabet
 *
 * Return: doesn't
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
