#include "search_algos.h"

/**
 * binary_search - will search through an array using binary search
 * @array: array to search through
 * @size: size of array to search through
 * @value: value to search for
 *
 * Return: index of value, -1 on error
 */
int binary_search(int *array, size_t size, int value)
{
	int sta = 0, end = size - 1, mid = 0, i;

	if (!array)
		return (-1);
	while (sta <= end)
	{
		printf("Searching in array: ");
		for (i = sta; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i + 1 <= end)
				printf(", ");
			else
				printf("\n");
		}
		mid = (sta + end) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			sta = mid + 1;
		else
			end = mid - 1;
	}

	return (-1);
}
