#ifndef DOG_H
#define DOG_H
/**
  *struct dog - struct
  *@name : name input string
  *@age : age input float
  *@owner: owner input string
  *
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
