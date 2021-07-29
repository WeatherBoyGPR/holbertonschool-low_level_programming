#include "lists.h"

/**
 * list_len - will count elements in a linked list_t list
 * @h: head of the array
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
		h = h->next, c++;
	return (c);
}
