#include "main.h"

/**
  * print_numbers - print numbers from 0 to 9 using putchar
  *
  * Return: function will print numbers from 0 to 9 using putchar
  */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar((i) + '0');
	}
	_putchar('\n');
}
