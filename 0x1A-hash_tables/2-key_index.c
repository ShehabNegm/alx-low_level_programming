#include "hash_tables.h"

/**
  * key_index - function to give the index of a key
  * @key : key to be indexed after being hashed
  * @size: size of the array to be indexed at
  * Return: will return the index of the array
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
