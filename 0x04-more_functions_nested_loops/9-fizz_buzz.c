#include "holberton.h"
#include <stdio.h>

/**
 * main - goes through fizzbuzz test
 *
 * Return: 0
 */
int main(void)
{
	int aqualung = (1);
	int whiteroom = (0);
	int lifeonmars = (0);

	for (aqualung = 1; aqualung <= 100; aqualung++)
	{
		whiteroom = (aqualung % 3);
		lifeonmars = (aqualung % 5);
		if (whiteroom != 0 && lifeonmars != 0)
		{
			printf("%i", aqualung);
		}
		else if (whiteroom == 0 && lifeonmars != 0)
		{
			printf("%s", "Fizz");
		}
		else if (whiteroom != 0 && lifeonmars == 0)
		{
			printf("%s", "Buzz");
		}
		else if (whiteroom == 0 && lifeonmars == 0)
		{
			printf("%s", "FizzBuzz");
		}
		if (aqualung < 100)
		{
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
