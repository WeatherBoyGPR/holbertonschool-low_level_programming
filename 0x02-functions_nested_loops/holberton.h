#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * house  - prints "Holberton"
 * @s: The string to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void house(void)
{
	printf("%s", "Holberton\n");
        return;
}

#endif
