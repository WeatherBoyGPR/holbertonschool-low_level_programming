#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - prints alphabets
 *
 *Description: will print the lower case alphabet
 *and then the upper case alphabet
 *Return: 0
*/
int main(void)
{
	char i;
	char I;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (I = 'A'; I <= 'Z'; I++)
	{
		putchar(I);
	}
	putchar('\n');
	return (0);
}
