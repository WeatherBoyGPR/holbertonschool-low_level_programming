#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 *
 * Return: none
 */
void rev_string(char *s)
{
	int paperboat = 0;
	int become = 0;
	int spine = 0;
	char circle;

	while (s[paperboat] != '\0')
	{
		paperboat++;
	}
	paperboat--;
	while (spine == 0)
	{
		circle = s[paperboat - become];
		s[paperboat - become] = s[become];
		s[become] = circle;
		become++;
		if (become > (paperboat / 2))
		{
			spine++;
		}
	}
}
