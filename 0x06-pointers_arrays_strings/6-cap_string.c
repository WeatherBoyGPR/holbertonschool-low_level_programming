#include "holberton.h"

/**
 * cap_string - will capitalize every word in the provided string
 * @str: string to be modified
 *
 * Return: a pointer to str
 */
char *cap_string(char *str)
{
	int x, y, c = 0;
	char *d = ",;.!? \"(){}\n\t";

	for (x = 0; *(str + x) != '\0'; x++)
	{
		if (!x && *str >= 97 && *str <= 122)
		{
			*str -= 32;
			continue;
		}

		if (c && *(str + x) >= 97 && *(str + x) <= 122)
		{
			*(str + x) -= 32;
			c = 0;
			continue;
		}

		for (y = 0; *(d + y) != '\0'; y++)
		{
			c = 0;
			if (*(str + x) == *(d + y))
			{
				c++;
				break;
			}
		}
	}
	return (str);
}
