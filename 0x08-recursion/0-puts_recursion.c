#include "main.h"

/**
  * _puts_recursion - will print a string recursivley
  * @s : input string
  *
  * Return : void
  */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(s[i]);
		_puts_recursion(&s[i + 1]);
	}
}

