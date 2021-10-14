#include "hash_tables.h"

/**
 * hash_table_print - will print the contents of a hash table
 * @ht: hash table to print
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size = 0, idx = 0, i = 0;
	hash_node_t *hold = NULL;

	if (ht == NULL)
		return;
	size = ht->size;

	putchar('{');
	while (idx < size)
	{
		if ((ht->array)[idx] != NULL)
		{
			hold = (ht->array)[idx];
			while (hold != NULL)
			{
				if (i)
					printf(", ");
				printf("\'%s\': \'%s\'", hold->key, hold->value);
				i++;
				hold = hold->next;
			}
		}
		idx++;
	}
	printf("}\n");
}
