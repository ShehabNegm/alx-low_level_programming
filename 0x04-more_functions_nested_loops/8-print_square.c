#include "main.h"

/**
  * print_square - print square of i size times
  * @i : input size
  * Return: function will print square of i size
  */

void print_square(int i)
{
	int s;
	int hsh;

	if (i <= 0)
	{
		_putchar('\n');
	}
	else
	{
		hsh = i;
		for (i = i; i > 0; i--)
		{
			for (s = 0; s < hsh; s++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
