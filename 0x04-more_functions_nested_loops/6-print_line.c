#include "main.h"

/**
  * print_line - print _ n times
  * @i : input int
  * Return: function will print _ n times
  */

void print_line(int i)
{

	if (i <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = i; i > 0; i--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
