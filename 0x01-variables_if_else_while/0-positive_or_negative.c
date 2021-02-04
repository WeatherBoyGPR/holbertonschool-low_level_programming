#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - is the main function, declares state of number
*
*Description: will print a number and it's state,
*being either negative, positive, or zero.
*Section Main: the only section
*Return: will return 0
*/
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%i", n);
		printf("%s", " is zero\n");
	}
	else if (n > 0)
	{
		printf("%i", n);
		printf("%s", " is positive\n");
	}
	else if (n < 0)
	{
		printf("%i", n);
		printf("%s", " is negative\n");
	}
	return (0);
}
