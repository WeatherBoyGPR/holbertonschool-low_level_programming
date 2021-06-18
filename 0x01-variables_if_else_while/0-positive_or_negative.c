#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generates random number, states if it is negative or positive
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n)
	{
		if (n > 0)
			printf("%d is positive\n", n);
		else
			printf("%d is negative\n", n);
	}
	else
		printf("%d is zero\n", n);
	return (0);
}
