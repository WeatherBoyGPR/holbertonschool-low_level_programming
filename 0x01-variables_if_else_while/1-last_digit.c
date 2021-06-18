#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints last digit of random number
 *
 * Return: 0
 */
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = (n % 10);
	if (d < 0)
		d *= -1;
	printf("Last digit of %d is %d and is ", n, d);
	if (d)
	{
		if (d > 5)
			printf("greater than 5\n");
		else
			printf("less than 6 and not 0\n");
	}
	else
		printf("and is 0\n");
	return (0);
}
