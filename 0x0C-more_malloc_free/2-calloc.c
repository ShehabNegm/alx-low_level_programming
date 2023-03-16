#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * _calloc - will make allocated memorry and initialize it to zero
  * @nmemb : input int number of elements
  * @size : each element size
  *
  * Return: will return pointer to new location
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);
	memset(p, 0, nmemb * size);
	return (p);


}


