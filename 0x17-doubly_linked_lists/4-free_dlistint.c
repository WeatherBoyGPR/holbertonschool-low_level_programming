#include "lists.h"

/**
 * free_dlistint - will free a doubly linked list
 * @head: the head of the list to free
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *posi = head, *hold = NULL;

	while (posi != NULL)
	{
		hold = posi;
		posi = posi->prev;
	}

	posi = hold;

	while (posi != NULL)
	{
		hold = posi;
		posi = posi->next;
		free(hold);
	}
}
