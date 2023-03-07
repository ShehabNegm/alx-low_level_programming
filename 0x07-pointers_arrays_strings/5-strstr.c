#include "main.h"

/**
  * _strstr - will locate substring in a string
  * @haystack : input string to be searched
  * @needle : input substring to be searched for
  *
  * Return: will return pointer to first occurence of substring
  */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j = 0;
	int f;

	if (needle[0] == '\0' && haystack[0] == '\0')
		return ('\0');

	while (haystack[j] != '\0')
	{
		i = 0;
		if (needle[0] == haystack[j])
		{
			f = j;
			while (needle[i] == haystack[j] && needle[i] != '\0')
			{
				i++;
				j++;
			}
			if (needle[i] == '\0')
				return (&haystack[f]);
		}
		j++;
	}
	return ('\0');
}
