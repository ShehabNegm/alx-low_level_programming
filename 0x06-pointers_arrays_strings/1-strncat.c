#include "main.h"

/**
  * _strncat - will concatenates two strings with n bytes
  * @dest: input destination string
  * @src: input sourse string
  * @n: input n bytes
  *
  * Return: will return pointer to resulting string
  */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int i;

	for (len = 0; dest[len] != '\0'; ++len)
		;
	for (i = 0; i < n; ++i)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

