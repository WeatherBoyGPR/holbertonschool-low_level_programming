#include "lists.h"

/**
 * add_node - will add a node to a singly linked list_t list
 * @head: pointer to the head of the list
 * @str: string to insert into element
 *
 * Return: the address of the new elements or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newh = NULL;
	char *s;
	int len;

	newh = malloc(sizeof(list_t));
	if (newh == NULL)
		return (NULL);

	s = strdup(str);
	if (s == NULL)
		return (NULL);

	for (len = 0; s[len] != '\0'; len++)
		continue;

	newh->str = s;
	newh->len = (len);
	newh->next = *head;
	*head = newh;
	return (newh);
}
