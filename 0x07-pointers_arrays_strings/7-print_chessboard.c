#include "holberton.h"

/**
*print_chessboard - prints the chessboard
*@a: is the chessboard
*
*Return: doesn't
*/
void print_chessboard(char (*a)[8])
{
	int indexX, indexY;

	for (indexY = 0; indexY < 8; indexY++)
	{
		for (indexX = 0; indexX < 8; indeX++)
		{
			_putchar(a[indexY][indexX]);
		}
		_putchar('\n');
	}
}

