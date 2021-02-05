#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints alphabet
 *
 *Description: will print the lower case alphabet
 *Return: 0
*/
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
