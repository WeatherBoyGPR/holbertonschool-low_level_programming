#include "lists.h"

/**
 * free_list - will free a singly linked list_t list
 * @head: the head of the linked list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *buf = head;

	while (buf != NULL)
	{
		free(head->str);
		buf = head->next;
		free(head);
		head = buf;
	}
}
