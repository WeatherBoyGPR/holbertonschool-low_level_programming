#include "hash_tables.h"

/**
 * hash_table_get - will get a value associated with a key
 * @ht: hash table to search through
 * @key: key of target node
 *
 * Return: char pointer to value, otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *posi = NULL;
	char *hold = NULL;
	int i = 0;

	if (key[0] == '\0' || ht == NULL)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	i = check_list((ht->array)[idx], key);
	if (i < 1)
		return (NULL);
	posi = (ht->array)[idx];
	while (strcmp(posi->key, key))
		posi = posi->next;
	hold = posi->value;
	return (hold);
}
