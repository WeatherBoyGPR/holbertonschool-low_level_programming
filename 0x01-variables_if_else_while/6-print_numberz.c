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
	char i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
