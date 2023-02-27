#include "main.h"

/**
  * _strlen - will return the length of a string
  * @c: input pointer
  *
  * Return: will return int length of a string
  */

int _strlen(char *c)
{
	int len = 0;

	while (*c != '\0')
	{
		len++;
		c++;
	}
	return (len);

}
