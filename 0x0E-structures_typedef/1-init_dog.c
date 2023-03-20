#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - function to initialize a struct
  * @d : input pointer to struct
  * @name : input name
  * @age : input age
  * @owner : input owner
  *
  * Return: will initialize a struct
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
