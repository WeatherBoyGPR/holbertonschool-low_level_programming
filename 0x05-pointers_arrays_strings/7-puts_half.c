#include "holberton.h"

/**
 * puts_half - will print half of a string
 * @str: the string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int length;
	int i, n;

	for (length = 0; str[length] != '\0'; length++)
		continue;

	n = length / 2;

	if (length % 2)
		length++;
	length /= 2;

	for (i = length; n; i++, n--)
		_putchar(str[i]);
	_putchar('\n');
}
