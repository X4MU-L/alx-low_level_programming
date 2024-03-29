#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table of size @size
 * @size: the size of the hash table
 * Return: returns a pointer to a hash table on the heap or NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **)calloc(sizeof(hash_node_t *),
					      table->size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
