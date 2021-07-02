#include "holberton.h"

/**
 * rot13 - will convert a string with rot13
 * @str: string to be processed
 *
 * Return: pointer to the processed string
 */
char *rot13(char *str)
{
	int x, y;
	char *com[2] = {"aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ",
	"nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM"};

	for (x = 0; *(str + x) != '\0'; x++)
	{
		for (y = 0; com[0][y]; y++)
		{
			if (*(com[0] + y) == *(str + x))
			{
				*(str + x) = *(com[1] + y);
				break;
			}
		}
	}

	return (str);
}
