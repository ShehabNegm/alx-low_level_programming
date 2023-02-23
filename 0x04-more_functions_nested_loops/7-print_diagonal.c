#include "main.h"

/**
  * print_diagonal - print \ n times
  * @i : input int
  * Return: function will print \ n times
  */

void print_diagonal(int i)
{
	int sp;
	int ln;

	if (i <= 0)
	{
		_putchar('\n');
	}
	else
	{
		ln = i;
		for (i = i; i > 0; i--)
		{
			sp = 0;
			while (sp < ln - i)
			{
				_putchar(' ');
				sp++;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
