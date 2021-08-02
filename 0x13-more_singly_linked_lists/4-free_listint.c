#include "lists.h"

/**
 * free_listint - will free a linked list of listint_t
 * @head: head of the linked list to process
 *
 * Return: doesn't
 */
void free_listint(listint_t *head)
{
	listint_t *hold;

	while (head)
	{
		hold = head;
		head = head->next;
		free(hold);
	}
}
