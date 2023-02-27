#include "main.h"

/**
  * print_rev - will return a string in reverse
  * _strlen - will return the length of a string
  * @c: input pointer to a string
  *
  * Return: will print string to stdout in reverse
  */

void print_rev(char *c)
{

	int len = 0;
	int i;
	char *tmp = c;

	while (*tmp != '\0')
	{
		len++;
		tmp++;
	}

	for (i = len; i >= 0; i--)
	{
		_putchar(*(c + i));
	}
	_putchar('\n');
}
