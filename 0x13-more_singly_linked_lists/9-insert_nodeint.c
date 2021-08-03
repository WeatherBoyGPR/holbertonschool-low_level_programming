#include "lists.h"

/**
 * insert_nodeint_at_index - will insert a node into a linked list
 * @head: head of the linked list
 * @idx: index to insert node into
 * @n: value to insert into newly created node
 *
 * Return: pointer to the newly created node, NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nav = 1;
	listint_t *loc = NULL, *hold = NULL;

	hold = malloc(sizeof(listint_t));
	if (hold == NULL)
		return (NULL);
	hold->n = n;

	if (!idx)
	{
		hold->next = *head;
		*head = hold;
		return (hold);
	}

	if (*head != NULL)
	{
		loc = *head;
		while (nav < idx)
		{
			if (loc == NULL || loc->next == NULL)
			{
				free(hold);
				return (NULL);
			}
			loc = loc->next;
			nav++;
		}
	}
	hold->next = loc->next;
	loc->next = hold;

	return (hold);
}
