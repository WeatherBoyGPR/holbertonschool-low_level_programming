#include "hash_tables.h"

/**
 * key_index - will hash a key to a hash table of size
 * @key: key to hash
 * @size: size of hash table
 *
 * Return: index number
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
