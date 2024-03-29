#include "hash_tables.h"

/**
 * hash_table_create - will create a hash table
 * @size: size of new hash table
 *
 * Return: newly created hash table, NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i = 0;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (; i < size; i++)
		table->array[i] = NULL;
	table->size = size;

	return (table);
}
