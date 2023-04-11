#include "hash_tables.h"

/**
 * hash_table_print - prints the key:value pair of a hash table
 * @ht: pointer to a hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0, flag = 0;
	hash_node_t *temp;

	if (ht)
	{
		printf("{");

		while (index < ht->size)
		{

			if (ht->array[index])
			{
				temp = ht->array[index];
				while (temp != NULL)
				{
					if (!flag)
						flag = 1;
					else
						printf(", ");
					printf("'%s': '%s'", temp->key,
					       temp->value);
					temp = temp->next;
				}
			}
			index++;
		}
		printf("}\n");
	}
}
