#include <stdio.h>
#include "variadic_functions.h"

/**
*print_numbers - will print entered numbers
*@separator: a string to be place inbetween entered numbers
*@n: how many numbers are to be printed
*
*Return: doesn't
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int dawn;
	unsigned int borealis;
	va_list triage;

	if (n == 0)
		return;

	va_start(triage, n);

	borealis = va_arg(triage, int);

	if (separator == NULL)
	{
		for (dawn = 0; dawn < n; dawn++)
		{
			printf("%d", borealis);
			borealis = va_arg(triage, int);
		}
	printf("\n");
	}
	else
	{
		for (dawn = 0; dawn < (n - 1); dawn++)
		{
			printf("%d%s", borealis, separator);
			borealis = va_arg(triage, int);
		}
			printf("%d\n", borealis);
	}
	va_end(triage);
}
