#include "holberton.h"

/**
 * print_rev - will print a string in reverse
 * @s: the string to be printed
 *
 * Return: doesn't
 */
void print_rev(char *s)
{
	int length = 0;

	if (s && *s)
	{
		while (*s != '\0')
		{
			s++;
			length++;
		}
		s--;
		while (length)
		{
			_putchar(*s);
			length--;
			s--;
		}
	}
	_putchar('\n');
}
