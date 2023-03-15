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
	int wc; /* count words */
	int strlen = 0; /*count char inside str*/
	char **p;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		while (isspace(str[i]) == 0 && isspace(str[i + 1] == 0))
		{
			strlen++;
			i++;
			if (isspace(str[i]) == 0 && isspace(str[i + 1]) != 0 )
			{
				wc++;
			}
		}
		strlen++;
		i++;
	}

	p = malloc((wc + 1) * sizeof(char)); /*allocated memory for words*/

	for (i = 0; i < wc; i++)
	{
		p[i] = malloc((strlen + 1 *sizeof(char)));
		if (p[i] == NULL)
		{
			return (NULL);
		}
	}


	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	k = 0;
	i = 0;

	while (str[i] != '\0')
	{
		for (k = 0; k < wc; k++)
		{
			j = 0;
			while (isspace(str[i]) == 0)
			{
				p[k][j] = str[i];
				j++;
				i++;
			}
			p[k][j] = '\0';
		}
		i++;
	}
	p[k] = NULL;
	return (p);
}
