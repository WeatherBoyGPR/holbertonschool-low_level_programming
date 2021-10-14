#include "hash_tables.h"

/**
 * hash_table_set - will insert a value into a hash table
 * If a value is present in the target index, the new value will be
 * inserted and made to point to the old value
 *
 * @ht: hash table to insert value into, must be NULL initialized
 * @key: index key for target node
 * @value: value to insert into hash table
 *
 * Return: 1 on success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	int i = 0;
	hash_node_t *newnode = NULL;
	char *hold = NULL, *nkey = NULL;

	if (key[0] == '\0' || ht == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	i = check_list(((ht->array)[idx]), key);
	newnode = ((ht->array)[idx]);
	if (i <= 0)
	{
		newnode = malloc(sizeof(hash_node_t));
		if (newnode == NULL)
			return (0);
		nkey = malloc(strlen(key) + 1);
		if (nkey == NULL)
		{
			free(newnode);
			return (0);
		}
		strcpy(nkey, key);
		newnode->next = NULL, newnode->key = nkey;
		if (!i)
			newnode->next = (ht->array)[idx];
		(ht->array)[idx] = newnode;
	}
	hold = malloc(strlen(value) + 1);
	if (hold == NULL)
	{
		if (i <= 0)
			(ht->array)[idx] = newnode->next, free(nkey), free(newnode);
		return (0);
	}
	strcpy(hold, value);
	if (i == 1)
		insert_value_in_list((ht->array)[idx], key, hold);
	else
		newnode->value = hold;
	return (1);
}

/**
 * insert_value_in_list - will insert a prealloced string into the correct node
 * @list: list to insert value into, never NULL
 * @key: key of target node
 * @value: value to insert
 *
 * Return: Nothing
 */
void insert_value_in_list(hash_node_t *list, const char *key, char *value)
{
	hash_node_t *hold = list;

	while ((strcmp(key, hold->key)))
		hold = hold->next;
	free(hold->value);
	hold->value = value;
}

/**
 * check_list - will check a hash_node_t list for the presence of a key
 * @list: list to check
 * @key: key to check for
 *
 * Return: 1 on a match, -1 on NULL otherwise 0
 */
int check_list(hash_node_t *list, const char *key)
{
	hash_node_t *hold = NULL;

	if (list == NULL)
		return (-1);
	hold = list;
	while (hold != NULL && (strcmp(hold->key, key)))
		hold = hold->next;
	if (hold == NULL)
		return (0);
	return (1);
}
