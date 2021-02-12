#include "holberton.h"
#include <stdio.h>

/**
 * print_triangle - haha yes, triangle
 * @size: the size of the triangle
 *
 * Return: none
 */
void print_triangle(int size)
{
	int tusk = (1);
	int lovetrain = (0);
	int tickettoride = (0);
	int dirtydeedsdonedirtcheap = (0);
	int silentway = (0);

	if (size > 0)
	{
		for (; tusk != (size + 1); tusk++)
		{
			silentway = (size - tusk);
			dirtydeedsdonedirtcheap = (size - silentway);
			for (; tickettoride != silentway; tickettoride++)
			{
				_putchar(' ');
			}
			for (; lovetrain != dirtydeedsdonedirtcheap; lovetrain++)
			{
				_putchar('#');
			}
			tickettoride = (0);
			lovetrain = (0);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
