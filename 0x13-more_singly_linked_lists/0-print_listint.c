#include "lists.h"

/**
 * print_listint - will print the contents on a listint_t linked list
 * @h: the structure to print
 *
 * Return: the total number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nc = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nc++;
		h = h->next;
	}

	return (nc);
}
