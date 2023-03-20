#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
  * free_dog - function to free memorry
  * @d : pointer to struct
  *
  * Return: will return struct or NULL if failed
  */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
