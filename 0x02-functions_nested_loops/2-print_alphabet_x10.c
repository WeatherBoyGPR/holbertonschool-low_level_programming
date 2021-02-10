#include "holberton.h"

/**
 *print_alphabet - prints text
 *
 *Description: prints alphabet ten times
 *Return: 0
 */

void print_alphabet_x10(void)
{
	int timer = 0;
		while (timer < 10)
{
		int B = 97;

	for (B = 97; B < 123; B++)
	{
	_putchar(B);
	}
	_putchar('\n');
	timer++;
}
	return;
}
