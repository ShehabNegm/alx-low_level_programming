#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - will make allocated memorry
  * @b : input number of bytes required
  *
  * Return: will return void
  */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	else
		return (p);
}
