#include "main.h"
#include <stdlib.h>

/**
  * _realloc - reallocation of memory allocated with new size
  * @ptr : old memory pointer
  * @old_size : old memory allocated size
  * @new_size : new size to be allocated
  *
  * Return: will return pointer to new location
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (ptr);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	p = malloc(new_size);
	free (ptr);
	return (p);
}
