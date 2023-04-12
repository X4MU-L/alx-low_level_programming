#include "hash_tables.h"

/**
 * hash_table_set - add a value and a key to the hash table
 * @ht: pointer to a hash table
 * @key: the key to store the value
 * @value: the value to store
 * Return: 1 on success or 0 on failure
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item, *temp;

	if (!ht || !key || !*key)
		return (0);

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = strdup(key);
	item->value = strdup(value);
	index = key_index((unsigned char *)key, ht->size);
	item->next = NULL;

	if (!ht->array[index])
		ht->array[index] = item;
	else
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if ((strcmp(temp->key, key)) == 0)
			{
				if (temp->value)
					free(temp->value);
				temp->value = strdup(value);
				free(item->value);
				free(item->key);
				free(item);
				return (1);
			}
			temp = temp->next;
		}
		item->next = ht->array[index];
		ht->array[index] = item;
	}

	return (1);
}
