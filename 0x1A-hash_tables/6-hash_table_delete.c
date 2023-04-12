#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the pointer to the hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;

	if (ht)
	{
		while (index < ht->size)
		{
			free_node(ht->array[index]);
			index++;
		}
		free(ht->array);
		free(ht);
	}
}

/**
 * free_node - frees the node of a hash table
 * @node: pointer to a node of the hash table
 * Return: void
 */

void free_node(hash_node_t *node)
{
	hash_node_t *temp;

	if (node)
	{
		while (node)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			if (temp->value)
				free(temp->value);
			free(temp);
		}
	}
}
