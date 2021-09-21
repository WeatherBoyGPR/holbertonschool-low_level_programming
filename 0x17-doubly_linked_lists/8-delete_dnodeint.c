#include "lists.h"

/**
 * delete_dnodeint_at_index - will remove a specified node from a list
 * @head: the head of the list
 * @index: index of node to be removed
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hold = NULL, *posi = NULL;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	posi = *head;
	while (posi != NULL)
	{
		hold = posi;
		posi = posi->prev;
	}
	while (hold != NULL && i <= index)
	{
		posi = hold;
		hold = hold->next;
		i++;
	}
	if (i < index)
		return (-1);

	if (posi != NULL)
	{
		if (posi->prev != NULL)
			posi->prev->next = posi->next;
		if (posi->next != NULL)
			posi->next->prev = posi->prev;
		if (posi == *head)
			*head = posi->next;
		free(posi);
	}

	return (1);
}

