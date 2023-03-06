#include "main.h"

/**
  * _memset - will print n times of char b to char *s
  * @n : input unsigned int
  * @s : input pointer to array
  * @b : input character to be inserted
  *
  * Return: will return pointer to area S
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
