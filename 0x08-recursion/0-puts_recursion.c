#include "holberton.h"

/**
 * _puts_recursion - will print a string using recursion
 * @s: string to be printed
 *
 * Return: doesn't
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
