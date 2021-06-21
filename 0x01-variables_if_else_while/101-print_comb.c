#include <stdio.h>

/**
 * main - Will print out unique combinations of digits
 *
 * Return: 0
 */
int main(void)
{
	int num, anum, mnum;

	for (num = 0; num <= 9; num++)
	{
		for (anum = 0; anum <= 9; anum++)
		{
			for (mnum = 0; mnum <= 9; mnum++)
			{
				if (num < anum && anum < mnum && num != anum && anum != mnum)
				{
					putchar(num + 48);
					putchar(anum + 48);
					putchar(mnum + 48);
					if (((num * 100) + (anum * 10) + mnum) < 789)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
