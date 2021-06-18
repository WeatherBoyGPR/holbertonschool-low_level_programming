#include <stdio.h>

int main(void)
{
	int num;

	for (num = 0; num <= 99; num++)
	{
		if ((num % 100) < (num % 10))
		{
			putchar((num % 100) + 48);
			putchar((num % 10) + 48);
			if (num < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return(0);
}
