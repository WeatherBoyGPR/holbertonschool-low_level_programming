#include "variadic_functions.h"

/**
 * print_all - will print integers, chars, floats, and strings
 * @format: format string to declare types
 *
 * Return: doesn't
 */
void print_all(const char * const format, ...)
{
	print_t fun[] = {
		{"c", cprint},
		{"i", iprint},
		{"f", fprint},
		{"s", sprint}
	};
	int x = 0, y = 0;
	va_list arg;
	char *sep = "";

	va_start(arg, format);

	while (*(format + y) != '\0' && format)
	{
		x = 0;
		while (x < 4 && *(format + y) != *(fun[x].sym))
			x++;


		if (x <= 3)
		{
			printf("%s", sep);
			fun[x].print(arg);
			sep = ", ";
		}
		y++;
	}

	printf("\n");

	va_end(arg);
}

/**
 * fprint - will print floats
 * @arg: list to obtain float from
 *
 * Return: I'm afraid not
 */
void fprint(va_list arg)
{
	float n;

	n = va_arg(arg, double);
	printf("%f", n);
}

/**
 * iprint - will print integers
 * @arg: list to obtain integer from
 *
 * Return: no
 */
void iprint(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}

/**
 * cprint - will print chars
 * @arg: list to obtain chars from
 *
 * Return: nothing
 */
void cprint(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * sprint - will print a string, prints (nil) if pointer points to null
 * @arg: list to obtain string pointer from
 *
 * Return: nothing at all
 */
void sprint(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
