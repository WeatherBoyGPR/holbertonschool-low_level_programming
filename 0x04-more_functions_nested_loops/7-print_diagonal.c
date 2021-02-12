#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line
 *@n: how long the line will be
 *
 * Return: none
 */
void print_diagonal(int n)
{
	int groundcontrol = 0;
	int majortom = 0;
	int spaceoddity = 0;

	for (; groundcontrol != n; groundcontrol++)
	{
		majortom = (groundcontrol);
		if (n < 0)
		{
			_putchar('\n');
			break;
		}
		if (groundcontrol > 0)
		{
			for (; majortom > 0; majortom--)
			{
				_putchar(' ');
			}
		}
		_putchar('\\');
		if (n != spaceoddity)
		{
			_putchar('\n');
		}
		spaceoddity++;
	}
	if (n == 0)
	{
		_putchar('\n');
	}
}
