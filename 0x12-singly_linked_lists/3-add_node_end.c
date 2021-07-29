#include "lists.h"

/**
 * add_node_end - will add a node to the end of a list_t list
 * @head: the head of the list, NULL is list doesn't exist yet
 * @str: string to enter as a memeber of the list
 *
 * Return: pointer to the head of the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newh, *pos;
	int len = 0;
	char *s = NULL;

	pos = *head;
	newh = malloc(sizeof(list_t));
	if (newh == NULL)
		return (NULL);

	if (str != NULL)
	{
		s = strdup(str);
		if (s == NULL)
		{
			free(newh);
			return (NULL);
		}
		while (s[len] != '\0')
			len++;
	}

	if (*head != NULL)
	{
		while (pos != NULL && pos->next != NULL)
			pos = pos->next;
		pos->next = newh;
	}
	else
		*head = newh;
	newh->str = s;
	newh->len = len;
	newh->next = NULL;

	return (*head);
}
