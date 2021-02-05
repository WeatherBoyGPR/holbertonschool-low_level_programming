#include <stdio.h>

/**
 *main - prints size of types
 *
 *Description:it outputs the sizes of all variables
 *Return: it returns 0
 */
int main(void)
{
	int i;
	char c;
	long int l;
	long long int longi;
	float f;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(longi));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));
	return (0);
}
