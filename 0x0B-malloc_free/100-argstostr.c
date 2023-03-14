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

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			charc++;
		}

	}
	p = malloc(charc + ac);
	
	if (p == NULL)
	{
		free (p);
		return (NULL);
	}

	for (j = 0; j < ac; j++)
	{
		for (i = 0; av[j][i] != '\0'; i++)
		{
			*p = av[j][i];
			p++;
		}
		*p = '\0';
		p++;
		*p = '\n';
		p++;
	}
	return (p);
}

/**
  * main - main function
  * @argc : input int number of arguments
  * @argv : input array of string
  * Return: will return 0 or 1
  *
  

int main(int argc, char *argv[])
{

	argstostr(argc, argv);
	return (0);
}*/
