#include "holberton.h"

/**
 *_strcmp - compares two strings
 *@s1 : first string to be compared
 *@s2 : second string to be compared
 *
 *Return: difference
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;
	int difference = 0;

	do {
		difference = s1[index] - s2[index];
		if (s1[index] == '\0' && s2[index] == '\0')
		{
			break;
		}
		index++;
	} while (s1[index - 1] == s2[index - 1] || difference == 0);
	return (difference);
}
