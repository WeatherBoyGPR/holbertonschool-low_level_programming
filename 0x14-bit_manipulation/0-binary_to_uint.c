#include "main.h"

/**
 * binary_to_uint - will convert of binary number to an unsigned integer
 * @b: string which holds binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int ind;
	unsigned int expo = 1, res = 0;

	if (b == NULL || *b == '\0')
		return (0);

	for (ind = 0; *(b + ind) != '\0'; ind++)
		if (*(b + ind) != '1' && *(b + ind) != '0')
			return (0);

	for (ind -= 1; ind >= 0; ind--)
	{
		res += ((b[ind] - '0') * expo);
		expo *= 2;
	}

	return (res);
}
