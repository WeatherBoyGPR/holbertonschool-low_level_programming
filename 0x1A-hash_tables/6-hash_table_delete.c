#include "hash_tables.h"

/**
 * hash_table_delete - will delete a hash table
 * @ht: hash table to delete
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size = 0, idx = 0;
	hash_node_t *posi = NULL, *hold = NULL;

	if (ht == NULL)
		return;
	size = ht->size;

	while (idx < size)
	{
		if ((ht->array)[idx] != NULL)
		{
			posi = (ht->array)[idx];
			hold = posi;
			while (hold != NULL)
			{
				posi = posi->next;
				free(hold->value);
				free(hold->key);
				free(hold);
				hold = posi;
			}
		}
		idx++;
	}

	free(ht->array);
	free(ht);
}
