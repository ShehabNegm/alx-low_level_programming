#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - will make allocated memorry of new string
  * @s1 : input string 1
  * @s2 : input string 2
  * @n : int bytes to be copied
  * Return: will return pointer to new location
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	unsigned int j = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= sizeof(s2) - 1)
		n = sizeof(s2) - 1;

	p = malloc(sizeof(s1) + n);

	if (p == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		p[i] = s2[j];
		j++;
		i++;
	}
	p[i] = '\0';
	return (p);
}
