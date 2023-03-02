#include "main.h"

/**
  * cap_string - will change words starts letters to uppercase
  * @str: input string
  * Return: will return string with uppercase of words
  */

char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			if (str[i] == 32 || str[i] == 9 || str[i] == 10 ||
				str[i] == 44 || str[i] == 59 || str[i] == 46 ||
				str[i] == 33 || str[i] == 63 || str[i] == 34 ||
				str[i] == 40 || str[i] == 41 || str[i] == 123 ||
				str[i] == 125)
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
