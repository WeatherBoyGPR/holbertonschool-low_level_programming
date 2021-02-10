#include "holberton.h"

int _islower(int c)
{
	int result;
	result = 0;
	if (c >= 97 && c <= 122)
	{
		result = 1;
	} 
	return result;
}
