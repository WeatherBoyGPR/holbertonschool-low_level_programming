#include "lists.h"

/**
 * print_list - will print all elements of a list_t list
 * @h: head of the array
 *
 * Return: number of nodes in the array
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;
	char *str = NULL, *alt = "(nil)";

	while (h != NULL)
	{
		printf("[%d] ", h->len);
		if (h->str != NULL)
			str = h->str;
		else
			str = alt;
		printf("%s\n", str);
		h = h->next, c++;
	}

	return (c);
}
