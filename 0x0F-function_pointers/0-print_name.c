#include "function_pointers.h"

/**
 * print_name - will call a function which can print the entered string
 * @name: name to pass to function
 * @f: function to call
 *
 * Return: doesn't
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
