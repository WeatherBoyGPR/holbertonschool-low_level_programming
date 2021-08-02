#include "lists.h"

/**
 * free_listint2 - will free a linked list of listint_t, set head to NULL
 * @head: list to free
 *
 * Return: doesn't
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;

	while (*head)
	{
		hold = *head;
		*head = (*head)->next;
		free(hold);
	}
}
