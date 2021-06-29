#include "holberton.h"

/**
 * print_array - will print a specified number of integers from an array
 * @a: the array to print
 * @n: number of variables to print
 *
 * Return : doesn't
 */
void print_array(int *a, int n);
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
}
