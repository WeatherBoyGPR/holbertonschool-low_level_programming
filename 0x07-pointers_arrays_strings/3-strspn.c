#include "holberton.h"

/**
 *_strspn - obtains length of a prefix substring
 *@s: the string that will be scanned through
 *@accept: the string which contains the bytes to be searched for
 *
 *Return: returns number of bytes in the inital segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int index1 = 0;
	int index2;
	unsigned int result = 0;
	int check = 0;

	while (s[index1] != '\0')
	{
		index2 = 0;
		check = 0;
		while (accept[index2] != '\0')
		{
			if (s[index1] == accept[index2])
			{
				result++;
				check++;
			}
			index2++;
		}
		if (check == 0)
		{
			break;
		}
		index1++;
	}
	return (result);
}
