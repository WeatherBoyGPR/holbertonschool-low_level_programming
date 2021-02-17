#include "holberton.h"

/**
 * _print_rev - prints a string in reverse
 * @s: the string to be printed in reverse
 *
 * Return: none
 */
void print_rev(char *s)
{
	int paperboat = 0;
	int spine;

	while (s[paperboat] != '\0')
	{
		paperboat++;
	}
	spine = paperboat;
	for (spine > 0; spine >= 0; spine--)
	{
		_putchar(s[spine]);
	}
	_putchar('\n');
}
