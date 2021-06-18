#include <stdio.h>

/**
 * main - will print numbers
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		putchar(a + 48);
	putchar('\n');
	return (0);
}
