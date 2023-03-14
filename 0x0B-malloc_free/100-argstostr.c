#include "main.h"
#include <stdlib.h>

/**
  * argstostr - free memorry of 2d array
  * @ac : input int number of arguments
  * @av : input array of strings
  * Return: will return pointer to new string
  */
char *argstostr(int ac, char **av)
{
	int i;
	int charc = 0; /*count char inside argv*/
	char *p;
	int j;
	int k;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			charc++;
		}

	}
	p = malloc((charc + ac) * sizeof(char));
	
	if (p == NULL)
	{
		free (p);
		return (NULL);
	}
	k = 0;

	for (j = 0; j < ac; j++)
	{
		for (i = 0; av[j][i] != '\0'; i++)
		{
			p[k] = av[j][i];
			k++;
		}
		p[k] = '\n';
		k++;

	}
	p[k] = '\0';
	return (p);
}
