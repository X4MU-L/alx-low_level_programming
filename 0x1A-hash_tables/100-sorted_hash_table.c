#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table of size @size
 * @size: the size of the hash table
 * Return: returns a pointer to a sorted hash table on the heap or NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	if (!size)
		return (NULL);
	table = malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;
	table->array = (shash_node_t **)malloc(sizeof(shash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}

/**
 * shash_table_set - add a key: value to a sorted hash table
 * @ht: pointer to a sorted hash table
 * @key: the key to store the value
 * @value: the value to store
 * Return: 1 on success or 0 on failure
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *temp;

	if (!ht || !key || !*key)
		return (0);

	node = create_node(key, value);
	if (!node)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[index])
		ht->array[index] = node;
	else
	{
		temp = ht->array[index];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				if (temp->value)
					free(temp->value);
				temp->value = strdup(value);
				free(node->key);
				free(node->value);
				free(node);
				return (1);
			}
			temp = temp->next;
		}
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	sorted_insert_snode(ht, node);
	return (1);
}

/**
 * shash_table_get - get the value stored of @key in sorted hash table
 * @ht: pointer to a sorted hash table
 * @key: key whose value to get (char *)
 * Return: return pointer to value if found else NULL
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (!ht || !key || !*key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints the key:value pair of a sorted hash table
 * @ht: pointer to a sorted hash table
 * Return: void
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	unsigned long int flag = 0;

	if (ht)
	{
		printf("{");
		temp = ht->shead;
		while (temp)
		{
			if (!flag)
				flag = 1;
			else
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->snext;
		}
		printf("}\n");
	}
}


/**
 * shash_table_print_rev - prints the key:value pair of a sorted hash table
 * in reverse
 * @ht: pointer to a sorted hash table
 * Return: void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	unsigned long int flag = 0;

	if (ht)
	{
		printf("{");
		temp = ht->stail;
		while (temp)
		{
			if (!flag)
				flag = 1;
			else
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->sprev;
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: the pointer to the hash table
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	if (ht)
	{
		free_snode(ht->shead);
		free(ht->array);
		free(ht);
	}
}

/**
 * sorted_insert_snode - inserts node PHP linked list of items in
 * a hash table sorted by the first ASCII character
 * @ht: the pointer to the sorted hash table
 * @node: hash node to insert
 * Return: void
 */
void sorted_insert_snode(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp;

	if (!ht || !node)
		return;

	if (!ht->stail)
		ht->stail = node;
	if (!ht->shead)
	{
		ht->shead = node;
		return;
	}
	temp = ht->shead;
	if (*(node->key) < *(temp->key))
	{
		node->snext = temp;
		temp->sprev = node;
		ht->shead = node;
		return;
	}
	while (temp->snext &&  (*(temp->snext->key) < *(node->key)))
		temp = temp->snext;
	if (!temp->snext && (*(node->key) > *(temp->key)))
	{
		temp->snext = node;
		node->sprev = temp;
		ht->stail = node;
	}
	else
	{
		node->sprev = temp;
		node->snext = temp->snext;
		temp->snext->sprev = node;
		temp->snext = node;
	}
}

/**
 * free_snode - frees the nodes of a hash table linked list
 * @node: the pointer to the head node of the table
 * Return: void
 */

void free_snode(shash_node_t *node)
{
	shash_node_t *temp;

	if (node)
	{
		while (node)
		{
			temp = node;
			node = node->snext;
			if (temp->value)
				free(temp->value);
			free(temp->key);
			free(temp);
		}
	}
}

/**
 * create_node - creates a new node to be inserted in a hash table
 * @key: the key of the node
 * @value: the value to store in the hash table
 * Return: pointer to the newly created node
 */

shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *node;

	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (NULL);
	node->key = strdup(key);
	node->value = strdup(value);
	node->sprev = NULL;
	node->snext = NULL;
	node->next = NULL;

	return (node);
}
