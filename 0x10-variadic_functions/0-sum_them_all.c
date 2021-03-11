#include "variadic_functions.h"

/**
*sum_them_all - will add every argument together
*@n: the number of arguments to be added
*
*Return: wil return the sum of all arguements
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int dawn;
	unsigned int result = 0;
	va_list triage;

	if (n == 0)
		return (0);

	va_start(triage, n);

	for (dawn = 0; dawn < n; dawn++)
	{
		result = result + va_arg(triage, int);
	}
	va_end(triage);

	return (result);
}
