#include <unistd.h>

/**
 * main - Will print a quote
 *
 * Return: the return value of write
 */
int main(void)
{
	char *q = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	return (write(2, q, 59));
}
