#include "main.h"

/**
  * leet - will encodes string into 1337
  * @str: input string
  * Return: will return string encoded into 1337
  */

char *leet(char *str)
{
	int i;
	int n;
	char s1[5] = {'a', 'e', 'o', 't', 'l'};
	char s2[5] = {'A', 'E', 'O', 'T', 'L'};
	char s3[5] = {52, 51, 48, 55, 49};

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (n = 0; n < 5; ++n)
		{
			if (str[i] == s1[n] || str[i] == s2[n])
			{
				str[i] = s3[n];
			}
		}
	}
	return (str);
}
