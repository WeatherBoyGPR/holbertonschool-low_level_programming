#include "lists.h"

/**
 * get_nodeint_at_index - will search for a node at a specified index
 * @head: the linked list to search through
 * @index: the index of the targeted node
 *
 * Return: the found node, NULL on failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int comp = 0;

	while (comp < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		comp++;
	}
	return (head);
}
