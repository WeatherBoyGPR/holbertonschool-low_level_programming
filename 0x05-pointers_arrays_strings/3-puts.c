#include "holberton.h"

/**
 * _puts - will print a string
 * @str: the string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
