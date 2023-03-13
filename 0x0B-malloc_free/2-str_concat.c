#include "main.h"
#include <stdlib.h>

/**
  * str_concat - will concatenates two strings
  * @s1 : input str
  * @s2 : input str
  * Return: will return pointer to concatenated string
  */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k;
	char *p;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	else if (s2 == NULL)
	{
		s2 = " ";
	}
	else
	{
		for (i = 0; s1[i] != '\0'; ++i)
			;
		for (j = 0; s2[j] != '\0'; ++j)
			;

		p = (char *) malloc(i + j + 1);

		if (p == NULL)
		{
			return (NULL);
		}
		else
		{
			for (k = 0; k < i; ++k)
			{
				p[k] = s1[k];
			}
			for (k = 0; k < j; ++k)
			{
				p[i + k] = s2[k];
			}
			p[i + j] = '\0';
		}
	}
	return (p);
}
