#include "main.h"

/**
  * puts_half - will print 2nd half of a string to stdout
  * @c: input pointer to a string
  *
  * Return: will 2nd half of a string to stdout
  */

void puts_half(char *c)
{
	int i;
	int len;

	for (len = 0; c[len] != '\0'; ++len)
		;
	if (len % 2 == 0)
	{
		len = len / 2;
		for (i = len; c[i] != '\0'; ++i)
			_putchar(c[i]);
	}
	else
	{
		len = (len - 1) / 2;
		for (i = len; c[i] != '\0'; ++i)
			_putchar(c[i]);
	}
	_putchar('\n');
}
