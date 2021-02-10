#include <stdio.h>
#include "holberton.h"

/**
 *main - prints text
 *
 *Description: prints alphabet
 *Return: 0
 */
void print_alphabet(void)
{
	int B = 97;
	for(B = 97; B < 122; B++)
	{
	_putchar(B);
	}
	_putchar('\n');
	return;
}
