#include "holberton.h"

/**
 * main - will print the name of the program
 * @argc: number of arguments
 * @argv: command line arguments
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	if (argc)
		_puts(argv[0]);
	_putchar('\n');
	return (0);
}

/**
 * _puts - will print a string
 * @c: string to be printed
 *
 * Return: 0 if successful, 1 otherwise
 */
int _puts(char *c)
{
	while (*c != '\0')
	{
		_putchar(*c);
		c++;
	}
	return (0);
}
