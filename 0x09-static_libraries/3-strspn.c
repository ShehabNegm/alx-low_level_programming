#include "main.h"

/**
  * _strspn - will return the first segement of occured string
  * @s : input string to be searched
  * @accept : input serached for character
  *
  * Return: will return unsigned int of first sigment
  */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int f;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		f = 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f = 0;
				break;
			}
			j++;
		}
		if (f == 1)
			break;
		i++;
	}
	return (i);
}
