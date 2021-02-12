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

	for (; groundcontrol != n; groundcontrol++)
	{
		majortom = (groundcontrol);
		if (n <= 0)
		{
			putchar('\n');
			break;
		}
		for (groundcontrol > 0; majortom > 0; majortom--)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
}
