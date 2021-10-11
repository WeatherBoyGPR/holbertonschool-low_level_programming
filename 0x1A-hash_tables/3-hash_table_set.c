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
	hash_node_t *newnode = NULL;
	char *hold = NULL, *nkey = NULL;
	int i = 0;

	if (key[0] == '\0')
		return (0);
	/* gets index from hash */
	idx = key_index((unsigned char *)key, ht->size);
	/* checks index, i is non zero if key isn't at index */
	if (((ht->array)[idx]) != NULL)
		i = strcmp(((ht->array)[idx])->key, key);
	if (i || ((ht->array)[idx]) == NULL)
	{
		/* creates new node and mallocs key string*/
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
	/* sets up for value being inserted at existing node */
	else
		newnode = ((ht->array)[idx]);
	hold = malloc(strlen(value) + 1);
	if (hold == NULL)
		return (0);
	strcpy(hold, value);
	newnode->value = hold;
	return (1);
}
