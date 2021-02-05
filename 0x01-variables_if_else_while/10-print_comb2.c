#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints doublq digit numbers
 *
 *Description: will print 00, 01, 02, 03, and so on
 *Return: 0
*/
int main(void)
{
	int d1;
	int d2;
	int sum;

	d1 = 48;
	d2 = 48;
	sum = 0;

	for (sum = 0; sum <= 99 ; sum++)
	{
		putchar(d1);
		putchar(d2);
		if (sum < 99)
		{
			putchar(',');
			putchar(' ');
		}
		if (d2 < 57)
		{
			d2++;
		}
		else if (d2 == 57)
		{
			d1++;
			d2 = 48;
		}
	}
	putchar('\n');
	return (0);
}
