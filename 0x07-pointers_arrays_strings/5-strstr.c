#include "holberton.h"

/**
 *_strstr - Searches string haystack for the string needle
 *@haystack: the string to be searched through
 *@needle: the string to be searched for
 *
 *Return: returns a pointer to the first instance of needle within haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *target;
	int incre = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0' && *needle != '\0')
	{
		target = needle;
		while (*haystack != *target)
		{
			haystack++;
		}
		if (*haystack == '\0')
		{
			break;
		}
		while (*target != '\0' && *target == *haystack)
		{
			target++;
			haystack++;
			incre++;
		}
		if (*target == '\0')
		{
			return (haystack - incre);
		}
		haystack++;
		incre = 0;
	}
	return (0);
}
