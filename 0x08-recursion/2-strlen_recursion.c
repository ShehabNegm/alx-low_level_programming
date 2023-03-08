#include "main.h"

/**
  * _strlen_recursion - will return string length
  * @s : input string
  *
  * Return: return int
  */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);

	return (_strlen_recursion(&s[i + 1]) + 1);
}

