#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - will output a statement
 *
 *Description: will output a line stating a number,
 *will provide information about number
 *Return: 0
 */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = (n % 10);
	printf("%s", "Last digit of ");
	printf("%i", n);
	printf("%s", " is ");
	printf("%i", d);
	if (d == 0)
	{
		printf("%s", " and is 0");
	}
	else if (d > 5)
	{
		printf("%s", " and is greater than 5");
	}
	else if (d < 6 || d != 0)
	{
		printf("%s", " and is less than 6 and not 0");
	}
	printf("%s", "\n");
	return (0);
}
