#include "3-calc.h"

/**
 * main - will perform simple operations
 * @argc: number of strings
 * @argv: string to process
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int n1, n2, res;
	int (*op)(int n1, int n2);
	char *str;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	str = argv[2];
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	op = get_op_func(str);
	res = op(n1, n2);

	printf("%d\n", res);

	return (0);
}
