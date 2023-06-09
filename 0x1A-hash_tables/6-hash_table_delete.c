#include "hash_tables.h"

/**
  * hash_table_delete - function to delete a hash table
  * @ht: hash table to be deleted
  */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp1, *tmp2;
	hash_table_t *head = ht;
	unsigned long int i;


	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp1 = ht->array[i];
			while (tmp1 != NULL)
			{

				tmp2 = tmp1->next;
				free(tmp1->value);
				free(tmp1->key);
				free(tmp1);
				tmp1 = tmp2;
			}
		}
	}
	free(head->array);
	free(head);
}
