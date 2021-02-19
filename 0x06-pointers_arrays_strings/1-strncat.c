#include "holberton.h"

/**
 * _strcat - will append two strings together
 *@dest : the string that will be appended
 *@src : the string that will be used to append
 *@n : the maximum number of bytes
 *
 * Return:none
 */
char *_strncat(char *dest, char *src, int n)
{
/*this represents the length of dest*/
	int impossible = 0;
/*this represents the length of src*/
	int sickness = 0;
/*
 *this is used to regulate the string appending
 *it mainly controls how many characters are appended,
 *which characters are appended, and where they are appended to and from
 */
	int signals = 0;

/*these two loops  determine length of dest and src, respectively*/
	while (dest[impossible] != '\0')
	{
		impossible++;
	}
	while (src[sickness] != '\0')
	{
		sickness++;
	}
/*this should append the string*/
	while (signals != sickness && signals < n)
	{
		dest[impossible + signals] = src[signals];
		signals++;
	}
	return (dest);
}
