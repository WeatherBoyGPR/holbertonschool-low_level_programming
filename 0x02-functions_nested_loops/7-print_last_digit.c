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
	birdland = (birdland % 10);
	return (birdland);
}
