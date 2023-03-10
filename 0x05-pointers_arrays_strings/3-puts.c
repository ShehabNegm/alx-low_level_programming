#include "main.h"

/**
  * _puts - will print string to stdout
  * @c: input pointer to a string
  *
  * Return: will print string to stdout
  */

void _puts(char *c)
{
	while (*c != '\0')
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
}
