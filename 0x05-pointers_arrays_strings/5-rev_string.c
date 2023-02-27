#include "main.h"

/**
  * rev_string - will return a string in reverse
  * @c: input pointer to a string
  *
  * Return: will reverse a string
  */

void rev_string(char *c)
{
	int len = 0;
	int i;
	char str;
	char *tmp = c;

	while (*tmp != '\0')
	{
		len++;
		tmp++;
	}
	for (i = 0; i < len / 2; ++i)
	{
		str = c[i];
		c[i] = c[len - 1 - i];
		c[len - 1 - i] = str;
	}
}
