#include <stdio.h>
#include "holberton.h"

/**
 *print_alphabet - prints text
 *
 *Description: prints alphabet
 *Return: 0
 */

void print_alphabet(void)
{
	int B = 97;

	for (B = 97; B < 123; B++)
	{
	_putchar(B);
	}
	_putchar('\n');
	return;
}
