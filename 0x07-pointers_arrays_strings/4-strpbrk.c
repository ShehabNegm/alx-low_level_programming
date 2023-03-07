#include "main.h"

/**
  * _strpbrk - will return the first pointer of occured string
  * @s : input string to be searched
  * @accept : input serached for character
  *
  * Return: will return pointer to first occurence
  */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int f = 0;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				f = 1;
				break;
			}
			++i;
		}
		if (f == 1)
			break;
		s++;
	}
	if (f == 0)
		return ('\0');
	else
		return (s);
}
