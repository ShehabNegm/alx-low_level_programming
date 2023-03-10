#include "main.h"

/**
  * _strcat - will concatenates two strings
  * @dest: input destination string
  * @src: input sourse string
  *
  * Return: will return pointer to resulting string
  */

char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	for (len = 0; dest[len] != '\0'; ++len)
		;
	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}

