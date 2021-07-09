#include "holberton.h"

/**
 * main - will multiply two numbers
 * @argc: number of arguments
 * @argv: command line arguments
 *
 * Return: 0 on success, 1 otherwise
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1])) * (atoi(argv[2])));
		return (0);
	}

	printf("Error\n");
	return (1);
}
