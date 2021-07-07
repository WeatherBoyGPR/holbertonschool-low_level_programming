#include "holberton.h"

/**
 * _print_rev_recursion - will print a sting in reverse with recursion
 * @s: string to be printed
 *
 * Return: doesn't
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
