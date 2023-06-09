#include "hash_tables.h"

/**
  * hash_table_print - function to print a hash table
  * @ht: hash table to be printed
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size = ht->size, i, j;

	if (ht != NULL)
	{

		printf("{");

		for (i = 0; i < size; i++)
		{
			if (ht->array[i])
			{
				hash_node_t *tmp = ht->array[i];

				printf("'%s': '%s'", tmp->key, tmp->value);
				while (tmp->next != NULL)
				{
					printf(", '%s': '%s'", tmp->key, tmp->value);
					tmp = tmp->next;
				}
				j = i + 1;
				break;
			}
		}
		for (j = j; j < size; j++)
		{
			if (ht->array[j])
			{
				hash_node_t *tmp = ht->array[j];

				while (tmp != NULL)
				{
					printf(", '%s': '%s'", tmp->key, tmp->value);
					tmp = tmp->next;
				}
			}
		}
		printf("}\n");
	}
}
