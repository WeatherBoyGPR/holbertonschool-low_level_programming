#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Will print the numbers from n to 98
 * @n: the entered integer
 *
 * Return: Doesn't
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, " n);
			n--;
		}
		printf("%d, " n);
		return;
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, " n);
			n++;
		}
		printf("%d, " n);
		return;
	}
	printf("98\n");
}
