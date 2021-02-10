#include "holberton.h"

/**
 *print_last_digit - prints last digit
 *@birdland: the entered integer
 *
 *Description: prints last digit
 *Return: last digit of number
 */
int print_last_digit(int birdland)
{
	int CMOON;

	CMOON = (birdland % 10);
	if (CMOON < 0)
	{
		CMOON = (CMOON * -1);
	}
	_putchar(CMOON + '0');
	return (CMOON);
}
