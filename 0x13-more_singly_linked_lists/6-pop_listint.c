#include "lists.h"

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
