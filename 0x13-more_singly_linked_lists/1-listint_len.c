#include "lists.h"

/**
 * listint_len - will count the number of nodes in a linked list
 * @h: head of the linked list to process
 *
 * Return: the total number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int nc = 0;

	while (h != NULL)
	{
		nc++;
		h = h->next;
	}

	return (nc);
}
