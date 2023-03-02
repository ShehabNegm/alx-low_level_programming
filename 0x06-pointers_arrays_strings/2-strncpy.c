#include "main.h"

/**
  * _strncpy - will concatenates two strings with n bytes
  * @dest: input destination string
  * @src: input sourse string
  * @n: input n bytes
  *
  * Return: will return pointer to resulting string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	for (i = i; i < n; ++i)
	{
	dest[i] = '\0';
	}
	return (dest);
}
