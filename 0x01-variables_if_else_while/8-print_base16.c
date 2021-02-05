#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints base 16 digits
 *
 *Description: will print 0123456789ABCDEF
 *Return: 0
*/
int main(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 70; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
