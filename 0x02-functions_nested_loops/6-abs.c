#include "holberton.h"

/**
 *main - prints absolute value
 *
 *Description: prints absolute value
 *Return: absolute value of number
 */
int _abs(int parade)
{
	if (parade < 0)
	{
		parade = (parade * -1);
	}
	return parade;
}
