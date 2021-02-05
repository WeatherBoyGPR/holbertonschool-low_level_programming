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

	printf("Size of a char: %lu", (unsigned long)sizeof(c));
	printf("%s", " bytes(s)\n");
	printf("Size of an int: %lu", (unsigned long)sizeof(i));
	printf("%s", " bytes(s)\n");
	printf("Size of a long int: %lu", (unsigned long)sizeof(l));
	printf("%s", " bytes(s)\n");
	printf("Size of a long long int: %lu", (unsigned long)sizeof(longi));
	printf("%s", " bytes(s)\n");
	printf("Size of a float: %lu", (unsigned long)sizeof(f));
	printf("%s", " bytes(s)\n");
	return (0);
}
