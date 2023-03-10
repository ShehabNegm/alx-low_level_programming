#include "main.h"

/**
  * _memcpy - will print n times of char b to char *s
  * @n : input unsigned int
  * @dest : input pointer to array to be filled with src
  * @src : input mwmory area
  *
  * Return: will return pointer to area S
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
