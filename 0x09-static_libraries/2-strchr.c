#include "main.h"

/**
  * _strchr - will print n times of char b to char *s
  * @s : input string to be searched
  * @c : input serached for character
  *
  * Return: will return pointer to the first occurence of c or null otherwise
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');
}
