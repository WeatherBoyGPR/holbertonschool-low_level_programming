#include "holberton.h"

/**
 * reverse_array - will reverse characters in the array
 * @a: target array
 * @n: number of characters to reverse
 *
 * Return: doesn't
 */
void reverse_array(int *a, int n)
{
	int i;
	int buf = 0;

	n--;

	for (i = 0; i < n; i++)
	{
		buf = *(a + n);
		*(a + n) = *(a + i);
		*(a + i) = buf;
		n--;
	}
}
