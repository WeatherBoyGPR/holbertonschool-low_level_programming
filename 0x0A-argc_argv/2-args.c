#include "holberton.h"

/**
 * main - will print all received arguments
 * @argc: number of command line arguments
 * @argv: command line arguments
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; argc; i++)
	{
		printf("%s\n", argv[i]);
		argc--;
	}
	return (0);
}
