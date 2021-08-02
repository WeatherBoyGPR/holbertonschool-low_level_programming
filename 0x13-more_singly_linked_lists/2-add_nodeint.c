#include "lists.h"

/**
 * add_nodeint - will add a node to the beginning of a listint_t linked list
 * @head: the head of the linked list
 * @n: the number to insert into the new node
 *
 * Return: A pointer to the created node, NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = NULL;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;
	return (node);
}
