#include "variadic_functions.h"

/**
 * sum_them_all - will add entered integers
 * @n: number of integers to add
 *
 * Return: the sum of all entered integers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int res = 0, buf = 0;
	unsigned int i;

	if (!n)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		buf = va_arg(args, int);
		res += buf;
	}

	va_end(args);

	return (res);
}
