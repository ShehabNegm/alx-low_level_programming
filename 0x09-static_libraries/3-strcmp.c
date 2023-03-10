#include "main.h"

/**
  * _strcmp - will compares two strings
  * @s1: input first string
  * @s2: input second string
  *
  * Return: will return pointer to resulting string
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int def;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; ++i)
	{
		if (s1[i] != s2[i])
		{
			def = (s1[i] - s2[i]);
			break;
		}
		else
			def = 0;
	}
	return (def);
}
