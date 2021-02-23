#include "holberton.h"

/**
 *_strchr - will locate a character in a string
 *@s: string to be searched through
 *@c: character to be located
 *
 *Return: pointer to the first occurrence c, NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	int incre;
	char *result;
	int check = 0;

	for (incre = 0; s[incre] != '\0' && s[incre - 1] != c; incre++)
	{
		if (s[incre] == c)
		{
			result = &(s[incre]);
			check++;
		}
	}

	if (check > 0)
	{
		return (result);
	}
	else
	{
		return (0);
	}
}
