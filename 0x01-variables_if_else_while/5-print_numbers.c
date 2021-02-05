#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints numbers from 0 to 9
 *
 *Description: will print 0123456789
 *Return: 0
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%i", i);
	}
	putchar('\n');
	return (0);
}
