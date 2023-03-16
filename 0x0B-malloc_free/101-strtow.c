#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
  * strtow - function to split string into words
  * @str : input str
  * 
  * Return: will return pointer to new string
  */
char **strtow(char *str)
{
	int i = 0; 
	int k, j;
	int wc = 0; /* count words */
	int strlen = 0; /*count char inside str*/
	char **p;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	while (str[i] != '\0')
	{
		while (isspace(str[i]) == 0 && isspace(str[i + 1]) == 0)
		{
			strlen++;
			i++;
			if (isspace(str[i]) == 0 && isspace(str[i + 1]) != 0 )
			{
				wc++;
			}
		}
		i++;
	}

	p = (char **) malloc((wc + 1) * sizeof(char)); /*allocated memory for words and NULL last element*/
	if (p == NULL)
		return (NULL);

	for (i = 0; i < wc; i++)
	{
		p[i] = (char *) malloc((strlen + 1 *sizeof(char)));
		if (p[i] == NULL)
			return (NULL);
	}
	k = 0;
	i = 0;

	while (k < wc)
	{
		while (str[i] != '\0')
		{
			j = 0;
			while (isspace(str[i]) == 0)
			{
				p[k][j] = str[i];
				j++;
				i++;
				if (isspace(str[i - 1]) == 0 && isspace(str[i]) != 0 )
				{
					p[k][j] = '\0';
					k++;
				}
			}
			i++;
		}
	}
	p[k] = NULL;
	return (p);
}
