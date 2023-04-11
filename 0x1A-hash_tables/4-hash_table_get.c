#include "hash_tables.h"

/**
 * hash_table_get - get the value stored of @key in hash table
 * @ht: pointer to hash table
 * @key: key whose value to get (char *)
 * Return: return pointer to value if found else NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	item = ht->array[index];

	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
		    return (item->value);

		item = item->next;
	}

	return (NULL);
}
