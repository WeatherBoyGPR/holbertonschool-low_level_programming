#include "holberton.h"

/**
 * main - will print the number of arguments followed by a new line
 * @argc: number of arguments
 * @argv: command line arguments
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	if (argv)
		printf("%d\n", argc);
	return (0);
}

