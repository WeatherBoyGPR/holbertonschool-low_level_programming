#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints combinations of single digit numbers
 *
 *Description: will print 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 *Return: 0
*/
int main(void)
{
	int i;

	i = 48;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i < 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
