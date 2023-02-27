#include "main.h"

/**
  * puts2 - will print string to stdout
  * @c: input pointer to a string
  *
  * Return: will print string to stdout
  */

void puts2(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(c[i]);
	}
	_putchar('\n');
}
