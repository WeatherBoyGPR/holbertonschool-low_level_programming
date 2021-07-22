#include "variadic_functions.h"

/**
 * print_numbers - will print entered integers
 * @separator: a string to be printed between integers
 * @n: number of total integers to print
 *
 * Return: doesn't
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	const char *s;
	unsigned int i;
	int buf;

	if (!n)
		return;

	va_start(args, n);

	if (separator)
		s = separator;
	else
		s = "";

	for (i = 0; i < n; i++)
	{
		buf = va_arg(args, int);
		printf("%d", buf);
		if ((i + 1) != n)
			printf("%s", s);
	}
	printf("\n");
}
