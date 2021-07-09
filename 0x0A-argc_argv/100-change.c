#include "holberton.h"

/**
 * main - will print change
 * @argc: number of arguments
 * @argv: command line arguments
 *
 * Return: 0 on success, 1 otherwise
 */
int main(int argc, char **argv)
{
	int n;
	int i, res = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2 || scannum(argv[1]))
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	while (n)
	{
		if (n >= coin[i])
		{
			n -= coin[i];
			res++;
		}
		else
			i++;
	}

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
		if (!(*c >= '0' && *c <= '9') && !(*c == '-'))
			return (1);
		c++;
	}
	return (0);
}
