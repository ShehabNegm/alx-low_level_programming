#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
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

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = strcpy(dog->name, name);
	dog->owner = strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
