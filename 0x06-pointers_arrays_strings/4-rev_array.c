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
	int N = n;

	if (n < 0)
	{
		N = N * -1;
	}
	for (distance = 0; distance <= ((N - 1) / 2); distance++)
	{
		holder = a[N - 1 - distance];
		a[N - 1 - distance] = a[distance];
		a[distance] = holder;
	}
}
