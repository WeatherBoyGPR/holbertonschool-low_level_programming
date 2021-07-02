#include "holberton.h"

/**
 * leet - will convert a string to leet
 * @str: string to be processed
 *
 * Return: pointer to the processed string
 */
char *leet(char *str)
{
	int x, y;
	char com[2][10] = {
	{'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'},
	{'4', '3', '0', '7', '1'}};

	for (x = 0; *(str + x) != '\0'; x++)
	{
		for (y = 0; com[0][y]; y++)
		{
			if (com[0][y] == *(str + x))
			{
				*(str + x) = com[1][y / 2];
				break;
			}
		}
	}

	return (str);
}
