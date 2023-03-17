#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	void *tmp;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size < old_size)
	{
		tmp = malloc(new_size);
		memcpy(tmp, ptr, new_size);
		free(ptr);
		ptr = malloc(new_size);
		memcpy(ptr, tmp, new_size);
		free(tmp);
		return (ptr);
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	memcpy(p, ptr, old_size);
	free(ptr);
	return (p);
}
