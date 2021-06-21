#include <stdio.h>

/**
 * main - Will print out unique combinations of digits
 *
 * Return: 0
 */
int main(void)
{
	int num, anum;

	for (num = 0; num <= 9; num++)
	{
		for (anum = 0; anum <= 9; anum++)
		{
			if (num < anum && num != anum)
			{
				putchar(num + 48);
				putchar(anum + 48);
				if (((num * 10) + anum) < 89)
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
