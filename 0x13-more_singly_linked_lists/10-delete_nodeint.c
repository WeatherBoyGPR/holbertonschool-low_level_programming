#include "lists.h"

/**
 * delete_nodeint_at_index - will delete a target node in a linked list
 * @head: pointer to linked list
 * @index: index of target node
 *
 * Return: will return 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nav = 1;
	listint_t *loc = *head, *hold = *head;

	if (loc == NULL)
		return (-1);

	if (!index)
	{
		*head = (*head)->next;
		free(loc);
		return (1);
	}
	while (nav < index && loc != NULL)
	{
		hold = loc;
		loc = loc->next;
		nav++;
	}
	if (loc == NULL)
		return (-1);
	hold->next = loc->next;
	free(loc);
	return(1);
}
