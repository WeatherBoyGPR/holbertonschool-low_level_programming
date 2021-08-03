#include "lists.h"

/**
 * sum_listint - will add the contents of a listint_t linked list
 * @head: head of the singly linked list
 *
 * Return: the sum of all values in the list
 */
int sum_listint(listint_t *head)
{
	int c = 0;

	while (head != NULL)
	{
		c += head->n;
		head = head->next;
	}

	return (c);
}
