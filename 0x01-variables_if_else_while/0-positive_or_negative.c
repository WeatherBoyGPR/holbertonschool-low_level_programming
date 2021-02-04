#include <stdlib.h>
#include <time.h>

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
		puts((n)" is zero");
	else if (n > 0)
		puts((n)"is positive");
	else
		puts((n)" is negative");
	return (0);
}
