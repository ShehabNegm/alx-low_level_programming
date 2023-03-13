#include "main.h"
#include <stdlib.h>

/**
  * create_array - will create array using dynamic memory location
  * @c : input char
  * @size : size of char array
  * Return: will return pointer to the array of char type
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *p = (char *) malloc(size);

	if (size == 0)
	{
		return (NULL);
	}

	else if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}
	return (p);
}
