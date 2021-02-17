#include "holberton.h"

/**
 * swap_int - swaps the value of the two entered integers
 * @a: the first integer to be used in the exchange
 * @b: the second integer to be used in this exchange
 *
 * Return: None.
 */
void swap_int(int *a, int *b)
{
	int spine = *a;
	int circles = *b;
	*a = circles;
	*b = spine;
}
