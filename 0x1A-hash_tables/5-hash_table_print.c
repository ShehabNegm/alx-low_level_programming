#include "hash_tables.h"

/**
  * hash_table_print - function to print a hash table
  * @ht: hash table to be printed
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size = ht->size, i;
	char *spc;

	if (ht == NULL)
		return;

	printf("{");
	spc = "";

	for (i = 0; i < size; i++)
	{
		if (ht->array[i])
		{
			hash_node_t *tmp = ht->array[i];

			while (tmp != NULL)
			{
				printf("%s'%s': '%s'", spc, tmp->key, tmp->value);
				spc = ", ";
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}
