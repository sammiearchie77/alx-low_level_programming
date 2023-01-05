#include "hash_tables.h"

/**
 * key_index: Get the index at which a key/value pair should
 *            be stored in array of a hash tablle
 * @key: The key ot get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 *
 * Description: Using the djd2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
