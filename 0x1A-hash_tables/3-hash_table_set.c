#include "hash_tables.h"

/**
  * hash_table_set - function to add element to the hash table
  * @ht: hash table to add elements to
  * @key: element key
  * @value: element value
  * Return: 1 if succeeded 0 otherwise
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (value != NULL)
		node->value = strdup(value);
	else
		node->value = NULL;

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
		node->next = NULL;
	}
	else
	{
		hash_node_t *head = ht->array[index];
		hash_node_t *tmp = head;

		while (tmp != NULL)
		{
			if (strcmp(key, tmp->key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		node->next = head;
		ht->array[index] = node;
	}
	return (1);
}
