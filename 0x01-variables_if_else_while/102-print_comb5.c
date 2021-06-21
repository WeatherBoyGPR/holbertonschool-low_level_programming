#include <stdio.h>

/**
 * main - will print combinations of two digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int num1, num2;
	int d1, d2, d3, d4;
	d1 = 0;
	d2 = 0;
	d3 = 0;
	d4 = 0;

	for (num1 = 0; num1 <= 99; num1++)
	{
		d1 = num1 / 10;
		d2 = num1 % 10;
		for (num2 = 0; num2 <= 99; num2++)
		{
			d3 = num2 / 10;
			d4 = num2 % 10;

			if (num1 < num2)
			{
				putchar(d1 + 48);
				putchar(d2 + 48);
				putchar(' ');
				putchar(d3 + 48);
				putchar(d4 + 48);
				if (num1 < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
