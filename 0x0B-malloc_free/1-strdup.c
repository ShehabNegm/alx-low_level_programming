#include "main.h"
#include <stdlib.h>

/**
  * _strdup - will create dublicate string using dynamic memory location
  * @str : input str
  *
  * Return: will return pointer to dublicated string
  */
char *_strdup(char *str)
{
	int i;
	int j;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; str[i] != '\0'; ++i)
			;
		s = (char *) malloc(i + 1);

		if (s == NULL)
		{
			return (NULL);
		}
		else
		{
			for (j = 0; j < i; ++j)
			{
				s[j] = str[j];
			}
		}
	}
	return (s);
}
