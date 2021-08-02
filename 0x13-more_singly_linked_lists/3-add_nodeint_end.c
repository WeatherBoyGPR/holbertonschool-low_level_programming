#include "lists.h"

/**
 * add_nodeint_end - will add a node to the end of a listint_t linked list
 * @head: head of linked list
 * @n: integer to insert into node
 *
 * Return: a pointer to the new node, NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL, *nav = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		while (nav->next != NULL)
			nav = nav->next;
		nav->next = node;
	}

	return (node);
}
