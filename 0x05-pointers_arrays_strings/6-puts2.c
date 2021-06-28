#include "holberton.h"

/**
 * puts2 - will print every other character in a string
 * @str: string to be printed
 *
 * Return;
 */
void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (!(i % 2))
			_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
