#include "holberton.h"

/**
 * _calloc - will allocate memory for an array.
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to malloced space, NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;
	char *fill;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);

	res = malloc(size * nmemb);
	if (!res)
		return (NULL);

	fill = res;

	for (i = 0; i < (size * nmemb) ; i++)
		*(fill + i) = '\0';

	return (res);
}
