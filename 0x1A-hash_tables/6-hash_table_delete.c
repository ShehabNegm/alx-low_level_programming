#include "hash_tables.h"

/**
  * hash_table_delete - function to delete a hash table
  * @ht: hash table to be deleted
  */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *head;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		if (head == NULL)
			free(ht->array[i]);
		while ((tmp = head) != NULL)
		{
			head = head->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
