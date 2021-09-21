#include "lists.h"

/**
 * print_dlistint - will print the contents of a dlistint list
 * @h: head of the list
 *
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int res = 0;
	const dlistint_t *hold = h, *posi = h;

	while (posi != NULL)
		hold = posi, posi = posi->prev;
	while (hold != NULL)
	{
		res++;
		printf("%d\n", hold->n);
		hold = hold->next;
	}

	return (res);
}
