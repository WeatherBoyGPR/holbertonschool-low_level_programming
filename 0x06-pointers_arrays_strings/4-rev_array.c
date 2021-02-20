#include "holberton.h"

/**
 * reverse_array - will reverse the content of a string of integers)
 *@a: the string to be reversed
 *@n: the number of elements in the array
 *
 *return: returns zero
 */
void reverse_array(int *a, int n)
{
	int distance;
	int holder;

	for (distance = 0; distance <= ((n - 1) / 2); distance++)
	{
		holder = a[n - 1 - distance];
		a[n - 1 - distance] = a[distance];
		a[distance] = holder;
	}
}
