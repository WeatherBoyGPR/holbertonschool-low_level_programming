#include "holberton.h"

/**
 * print_line - prints a line
 *@n: how long the line will be
 *
 * Return: none
 */
void print_line(int n)
{
	int doobiewah = n;

	for (; doobiewah > 0; doobiewah--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
