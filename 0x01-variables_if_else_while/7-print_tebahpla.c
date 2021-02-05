#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints reverse alphabet
 *
 *Description: will print the lower case alphabet in reverse
 *Return: 0
*/
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
