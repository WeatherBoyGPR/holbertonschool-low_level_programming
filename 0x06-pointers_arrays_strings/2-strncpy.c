#include "holberton.h"

/**
 * _strncpy - will copy src to dest
 *@dest : the string that wil be copied to
 *@src : the string that will be copied from
 *@n : the maximum number of bytes
 *
 * Return:none
 */
char *_strncpy(char *dest, char *src, int n)
{
/*this represents the length of src*/
	int sickness = 0;
/*
 *this is used to regulate the string copying and overwriting
 *it mainly controls how many characters are copied,
 *which characters are copied, and where they are copying to and from
 *also regulates overwriting characters after copying
 */
	int signals = 0;

/*this loop determines length of src*/
	while (src[sickness] != '\0')
	{
		sickness++;
	}
/*this should copy the string*/
	while (signals < sickness && src[signals] != '\0' && signals <= n)
	{
		dest[signals] = src[signals];
		signals++;
	}
/*This should wipe the rest of the string*/
	while (signals < n)
	{
		dest[signals] = '\0';
		signals++;
	}
	return (dest);
}
