#include "lists.h"

/**
 * insert_dnodeint_at_index - will insert a node in a list
 * @h: head of the list
 * @idx: idx to insert node
 * @n: value to insert into node
 *
 * Return: newly created node, NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *hold = NULL, *posi = NULL, *newnode;
	unsigned int i = 0;

	if (h != NULL)
		posi = *h;
	while (posi != NULL)
	{
		hold = posi;
		posi = posi->prev;
	}
	while (hold != NULL && i < idx)
	{
		posi = hold;
		hold = hold->next;
		i++;
	}
	if (i < idx)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL, newnode->prev = NULL;

	if (posi != NULL)
	{
		newnode->prev = posi;
		posi->next = newnode;
	}
	if (hold != NULL)
	{
		newnode->next = hold;
		hold->prev = newnode;
	}
	if (h != NULL && *h == NULL)
		*h = newnode;

	return (newnode);
}
