#include "holberton.h"
#include <stdio.h>

/**
 * main - will perform fizzbuzz
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 99; num++)
	{
		if (!(num % 3))
			printf("Fizz ");
		if (!(num % 5))
			printf("Buzz ");
		if (!(num % 3) && !(num % 5))
			printf("FizzBuzz ");
		if (num % 3 && num % 5)
			printf("%d ", num);
	}
	printf("100\n");

	return (0);
}
