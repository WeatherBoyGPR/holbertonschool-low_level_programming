#include "holberton.h"

/**
 * print_square - haha yes, square
 * @size: the size of the square
 *
 * Return: none
 */
void print_square(int size)
{
	int purplehaze = (0);
	int doctordoctor = (0);

	if (size > 0)
	{
		for (; purplehaze != size; purplehaze++)
		{
			for (; doctordoctor != size; doctordoctor++)
			{
				_putchar('#');
			}
			_putchar('\n');
				}
	}
	else
	{
		_putchar('\n');
	}
}
