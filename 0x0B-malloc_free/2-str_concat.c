#include "holberton.h"

/**
 * str_concat - will concatenate two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int l = 0, i;

	if (!s1 || !s2)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		l++;
	for (i = 0; *(s2 + i) != '\0'; i++)
		l++;
	l++;

	str = malloc(sizeof(char) * l);

	if (!str)
		return (NULL);
	for (i = 0; *(s1) != '\0'; i++)
	{
		*(str + i) = *(s1);
		s1++;
	}
	while (*s2 != '\0')
	{
		*(str + i) = *(s2);
		s2++;
		i++;
	}
	*(str + i) = '\0';

	return (str);
}
