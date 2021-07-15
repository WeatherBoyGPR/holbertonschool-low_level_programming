#include "holberton.h"

/**
 * malloc_checked - will allocate memory with malloc
 * @b: bytes of memory to allocate
 *
 * Return: pointer to allocated memory upon success
 */
void *malloc_checked(unsigned int b)
{
	void *res = malloc(b);

	if (res == NULL)
		exit(98);
	return (res);
}
