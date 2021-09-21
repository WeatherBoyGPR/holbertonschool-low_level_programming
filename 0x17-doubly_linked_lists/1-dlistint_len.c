#include "lists.h"

/**
 * dlistint_len - will return the length of a dlistint list
 * @h: head of the list
 *
 * Return: number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int res = 0;
	const dlistint_t *hold = h, *posi = h;

	while (posi != NULL)
		hold = posi, posi = posi->prev;
	while (hold != NULL)
	{
		res++;
		hold = hold->next;
	}

	return (res);
}
