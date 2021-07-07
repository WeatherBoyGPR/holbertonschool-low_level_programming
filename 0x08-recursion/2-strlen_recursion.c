#include "holberton.h"

/**
 * _strlen_recursion - will find the length of a string with recursion
 * @s: string to process
 *
 * Return: the length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
