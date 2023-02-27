#include "main.h"

/**
  * _strcpy - will copy 2 strings
  * @s1: input array
  * @s2: input array
  * Return: will return pointer to s1
  */

char *_strcpy(char *s1, char *s2)
{
	int len;
	int i;

	for (len = 0; s2[len] != '\0'; ++len)
		;
	for (i = 0; i < len; ++i)
	{
		*(s1 + i) = *(s2 + i);
	}
	return (s1);

}
