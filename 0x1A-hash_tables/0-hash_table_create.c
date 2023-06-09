#include "hash_tables.h"

/**
  * hash_table_create - function to create a hash table
  * @size: size of the hash table array
  * Return: will return pointer to the hash table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(hash_node_t *));

	if (hash_table->array == NULL)
		return (NULL);

	return (hash_table);
}