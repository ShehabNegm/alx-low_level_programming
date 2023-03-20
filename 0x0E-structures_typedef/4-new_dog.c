#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
  * new_dog - function to make a struct
  * @name : input name
  * @age : input age
  * @owner : input owner
  *
  * Return: will return struct or NULL if failed
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->owner = owner;
	dog->age = age;
	return (dog);
}
