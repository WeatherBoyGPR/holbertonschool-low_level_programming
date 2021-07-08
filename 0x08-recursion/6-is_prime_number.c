#include "holberton.h"

/**
 * is_prime_number - will find if a number is prime by running another function
 * @n: number to process
 *
 * Return: 1 if prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);
	if (!(n))
		return (1);
	return (primo(2, n));
}

/**
 * primo - will determine if a number is prime using recursion
 * @n: number to test
 * @tar: number to test
 *
 * Return: 1 if prime, otherwise 0
 */
int primo(int n, int tar)
{
	if (n >= tar)
		return (1);
	if (!(tar % n))
		return (0);
	return (primo(n + 1, tar));
}
