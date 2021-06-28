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
	int i;

	for (length = 0; str[length] != '\0'; length++)
		continue;
	if (length % 2)
		length = ((length - 1) / 2);
	else
		length /= 2;

	for (i = length; length; i++, length--)
		_putchar(str[i]);
	_putchar('\n');
}
