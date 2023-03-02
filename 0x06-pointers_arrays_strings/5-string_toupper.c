#include "main.h"

/**
  * string_toupper - will change all lower case letters to uppercase
  * @str: input string
  * Return: will return string with uppercase
  */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);

}
