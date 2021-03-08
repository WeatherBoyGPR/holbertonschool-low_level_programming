#include "holberton.h"

/**
*main - will print the name of the file it is in
*
*Return: doesn't
*/
int main()
{
	int incre = 0;
	char *point;

	point = __FILE__;

	while (point[incre] != '\0')
	{
		_putchar(point[incre]);
		incre++;
	}
	_putchar('\n');
	return (0);
}
