#include "function_pointers.h"
#include <stdlib.h>

/**
*print_name - will print the entered name
*@name: the name to be printed
*@f: the function it is to be printed with
*
*Return: doesn't
*/
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	f(name);
}
