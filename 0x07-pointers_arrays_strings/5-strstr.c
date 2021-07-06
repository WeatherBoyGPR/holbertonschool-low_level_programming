#include "holberton.h"

/**
 * _strstr - will locate a substring
 * @haystack: string to be searched through
 * @needle: string to be searched for
 *
 * Return: pointer to first character in located substring, otherwise NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int x;
	int y = 0;

	for (x = 0; *(haystack + x) != '\0'; x++)
	{
		if (*(haystack + x) != *(needle + y))
			y = 0;
		else
			y++;
		if (*(needle + y) == '\0')
			return (haystack + x - y + 1);
	}

	return ('\0');
}
