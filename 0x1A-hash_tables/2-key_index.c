#include "hash_tables.h"

/**
 * key_index - get the index of a key in a hash table
 * @key: the strings to hash
 * @size: the size of the hash table
 * Return: the index to insert the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((hash_djb2(key) % size));
}
