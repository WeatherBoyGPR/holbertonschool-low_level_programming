#include "holberton.h"

/**
 * more_numbers - prints numbers ranging from 0 to 14
 *
 * Return: none
 */
void more_numbers(void)
{
	int promise = 0;

	for (; promise <= 10; promise++)
	{
		int holydiver = 48;
		int civilwar = 48;
		int crazytrain = 0;

		while (crazytrain == 0)
		{
			if (holydiver > 48 && holydiver <= 57)
			{
				_putchar(holydiver);
			}
			else
			{
				holydiver = 48;
			}
			if (civilwar >= 48 && civilwar <= 57)
			{
				_putchar(civilwar);
				civilwar++;
			}
			else
			{
				holydiver++;
				civilwar = 48;
			}
			if (holydiver == 49 && civilwar == 53)
			{
				crazytrain++;
				_putchar('\n');
			}
		}
	}
}
