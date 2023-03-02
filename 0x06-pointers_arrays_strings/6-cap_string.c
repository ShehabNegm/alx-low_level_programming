#include "main.h"

/**
  * cap_string - will change words starts letters to uppercase
  * @str: input string
  * Return: will return string with uppercase of words
  */

char *cap_string(char *str)
{
	int i;

	if (str[0] <= 'a' && str[0] >= 'z')
		str[0] = str[0] - 32;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if ((str[i] > 0 && str[i] < 48) || str[i] == 59)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
	}
	return (str);

}
