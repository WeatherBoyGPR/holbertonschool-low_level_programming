#include "lists.h"

/**
 * pop_listint - will free the first node in a linked list
 * @head: linked list to process
 *
 * Return: the value stored in the first node
 */
int pop_listint(listint_t **head)
{
	int num = 0;
	listint_t *holdem = NULL;

	if (*head == NULL || head == NULL)
		return (num);
	num = (*head)->n;
	holdem = (*head)->next;
	free(*head);
	*head = holdem;
	return (num);
}
