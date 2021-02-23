
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

	for (incre = 0; s[incre] != '\0'; incre++)
	{
		if (s[incre] == c)
		{
			return (&(s[incre]));
		}
	}
		return (0);
}
