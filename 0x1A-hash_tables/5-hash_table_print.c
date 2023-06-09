#include "hash_tables.h"

/**
  * hash_table_print - function to print a hash table
  * @ht: hash table to be printed
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char *spc;

	if (ht == NULL)
		return;

	printf("{");
	spc = "";

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", spc, tmp->key, tmp->value);
			spc = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
