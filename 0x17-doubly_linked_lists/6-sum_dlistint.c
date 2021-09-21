#include "lists.h"

/**
 * sum_dlistint - will add up elements within a dlistint list
 * @head: the head of the list
 *
 * Return: the sum of all values
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *posi = head, *hold = NULL;
	int res = 0;

	while (posi != NULL)
	{
		hold = posi;
		posi = posi->prev;
	}
	while (hold != NULL)
	{
		res += hold->n;
		hold = hold->next;
	}

	return (res);
}
