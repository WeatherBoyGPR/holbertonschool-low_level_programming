#ifndef HIGHVOLTAGE
#define HIGHVOLTAGE

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print - structure that holds chars and their functions
 * @sym: character to test for
 * @print: function that matches character
 *
 */
typedef struct print
{
	char *sym;
	void (*print)(va_list arg);
} print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

int _putchar(char c);

void fprint(va_list arg);
void iprint(va_list arg);
void cprint(va_list arg);
void sprint(va_list arg);

#endif
