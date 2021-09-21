#include "lists.h"

/**
 * get_dnodeint_at_index - will get a node from at a index from a list
 * @head: list to obtain node from
 * @index: index of node
 *
 * Return: pointer to node at index, NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *hold = NULL, *posi = head;
	unsigned int i = 0;

	while (posi != NULL)
	{
		hold = posi;
		posi = posi->prev;
	}
	posi = hold;
	while (posi != NULL && i < index)
	{
		i++;
		posi = posi->next;
	}

	return (posi);
}
