#include "main.h"

/**
  * print_triangle - print triangle of base i
  * @i : input int base of triangle
  * Return: function will print triangle of base i
  */

void print_triangle(int i)
{
	int sp; /* space */
	int ln; /* line */
	int hsh; /* hashtag */

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
			while (sp < i - 1)
			{
				_putchar(' ');
				sp++;
			}
			hsh = 0;
			while (hsh < ln - i + 1)
			{
				_putchar(35);
				hsh++;
			}
			_putchar('\n');
		}
	}
}
