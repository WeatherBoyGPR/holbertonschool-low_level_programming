#include "variadic_functions.h"

/**
 * print_strings - will print entered strings
 * @separator: string to separate characters
 * @n: number of entered arguments
 *
 * Return: doesn't
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;
	const char *s;

	if (!n)
		return;

	va_start(args, n);

	if (separator)
		s = separator;
	else
		s = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != (n - 1))
			printf("%s", s);
	}

	printf("\n");

	va_end(args);
}
