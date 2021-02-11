#include "holberton.h"

/**
 *jack_bauer - prints every minute of some loser's day
 *
 *Description: will print every minute of jack's day
 *Return: 0
 */

void jack_bauer(void)
{
	int evilwoman = (48);
	int lazarus = (48);
	int skyhigh = (48);
	int easylover = (48);
	int everlong = (1);

	while (everlong == 1)
	{
		_putchar(evilwoman);
		_putchar(lazarus);
		_putchar(58);
		_putchar(skyhigh);
		_putchar(easylover);
		_putchar('\n');

		if (evilwoman == 50 && lazarus == 51 && skyhigh == 53 && easylover == 57)
		{
			everlong--;
			break;
		}

		easylover++;
		if (easylover == 58)
		{
			skyhigh++;
			easylover = (48);
		}
		if (skyhigh == 54)
		{
			lazarus++;
			skyhigh = (48);
		}
		if (lazarus == 58)
		{
			evilwoman++;
			lazarus = (48);
		}
	}
}
