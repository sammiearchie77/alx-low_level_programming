#include "hash_tables.h"

/**
 * hash_djd2 - hash function implementing the djd2 algorithm
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djd2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 = c */

	return (hash);
}
