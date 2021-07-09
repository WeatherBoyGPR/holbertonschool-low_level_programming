#include "holberton.h"

/**
 * main - will add together two positive numbers
 * @argc: number of arguments
 * @argv: command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char **argv)
{
	int i;
	int res = 0;

	for (i = 1; i < argc; i++)
	{
		if (scannum(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
	}

	for (i = 1; i < argc; i++)
		res += atoi(argv[i]);

	printf("%d\n", res);
	return (0);
}

/**
 * scannum - will scan a string for non numerical characters
 * @c: string to be scanned
 *
 * Return: 1 is non numerical character is found, otherwise 0
 */
int scannum(char *c)
{
	while (*c != '\0')
	{
		if (!(*c >= '0' && *c <= '9'))
			return (1);
		c++;
	}
	return (0);
}
