#include "holberton.h"

/**
 * print_triangle - will print a triangle
 * @size: size of triangle
 *
 * Return: no
 */
void print_triangle(int size)
{
	int y, x;

	for (y = 1; y <= size; y++)
	{
		for (x = 0; x < (size - y); x++)
			_putchar(' ');
		for (; x < (size); x++)
			_putchar('#');
		_putchar('\n');
	}
}
