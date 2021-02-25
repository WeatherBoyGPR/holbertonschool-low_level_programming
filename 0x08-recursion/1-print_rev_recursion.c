#include "holberton.h"

/**
*_print_rev_recursion - will reverse the entered string
*@s: the string to be reversed
*
*Return: doesn't
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
