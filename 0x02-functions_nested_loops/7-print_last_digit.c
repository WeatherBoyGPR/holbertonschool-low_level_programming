#include "holberton.h"

/**
 * print_last_digit - what it says on the can
 * @n: the number to be processed
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int num = n % 10;

	if (num < 0)
	{
		num *= -1;
	}
	_putchar((num) + 48);

	return (num);
}
