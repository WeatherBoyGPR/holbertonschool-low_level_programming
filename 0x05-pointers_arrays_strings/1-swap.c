#include "holberton.h"

/**
 * swap_int - will switch the values of two integers
 * @a: pointer to the first integer in the swap
 * @b: pointer to the second integer in the swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int buf;

	buf = *b;
	*b = *a;
	*a = buf;
}
