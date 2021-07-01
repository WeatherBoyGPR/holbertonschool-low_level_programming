#include "holberton.h"

/**
 * string_toupper - will convert all lowercase letters to uppercase
 * @str: string to be processed
 *
 * Return: a pointer to the finished string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
		if (*(str + i) >= 97 && *(str + i) <= 122)
			*(str + i) -= 32;

	return (str);
}
