#include "main.h"

/**
  * print_number - print any number using putchar
  * @i : int input
  * Return: function will print numbers using putchar
  */

void print_number(int i)
{
	if (i > 0 && i < 10)
		_putchar((i % 10) + '0');
	else if (i == 0)
		_putchar(48);
	else if (i < 0 && -i < 10)
		_putchar((i % 10) + '0');
	else if (i < 0 && -i < 100)
	{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
	else if (i >= 10 && i < 100)
	{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
	}
	else if (i >= 100 && i <= 999)
	{
		_putchar((i / 100) + '0');
		_putchar((i / 1000) + '0');
		_putchar((i % 100) + '0');
	}
	else if (i >= 1000 && i <= 9999)
	{
		_putchar((i / 1000) + '0');
		_putchar((i / 1100) + '0');
		_putchar((i / 10 % 10) + '0');
		_putchar((i % 10) + '0');
	}
}
