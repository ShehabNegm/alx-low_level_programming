#include "main.h"

/**
  * set_string - will set string of pointer of a pointer
  * @s : input source pointer
  * @to : input destination pointer
  * Return: void
  */

void set_string(char **s, char *to)
{
	int len;
	int i;
	int len2;

	for (len = 0; **(s + len) != '\0'; ++len)
		;
	for (len2 = 0; to[len2] != '\0'; ++len2)
		;
	for (i = 0; i < len; ++i)
	{
		*(to + i) = **(s + i);
	}
	*(to + len) = '\0';
}
