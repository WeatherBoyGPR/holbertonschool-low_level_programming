#include "holberton.h"

/**
 * _puts - prints a string
 * @str: the string to be printed
 *
 * Return: none
 */
int _puts(char *str)
{
	int paperboat = 0;

	while (str[paperboat] != '\0')
	{
		_putchar(str[paperboat]);
		paperboat++;
	}
	_putchar('\n');
	return (paperboat);
}
