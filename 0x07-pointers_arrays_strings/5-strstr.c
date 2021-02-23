#include "holberton.h"

/**
 *_strstr - Searches string haystack for the string needle
 *@haystack: the string to be searched through
 *@needle: the string to be searched for\
 *
 *Return: returns a pointer to the first instance of needle within haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *beginning = haystack;
	char *target;
	int incre = 0;

	while (*beginning != '\0')
	{
		target = needle;
		while (*beginning != *target)
		{
			beginning++;
		}
		while (*target != '\0' && *target == *beginning)
		{
			target++;
			beginning++;
			incre++;
		}
		if (*target == '\0')
		{
			return (beginning - incre);
		}
		else
		{
			beginning++;
		}
	}
	return (0);
}
