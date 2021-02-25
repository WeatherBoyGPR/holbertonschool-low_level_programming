#include "holberton.h"

/**
*_strlen_recursion - prints the length of the entered string
*@s: the string to be processed
*
*Return: the length of the string
*/
int _strlen_recursion(char *s)
{
	static int num = 0;

	if (*s != '\0')
	{
		num++;
		return (_strlen_recursion(s + 1));
	}
	return (num);
}
