#include "main.h"

/**
  * print_number - print any number using putchar
  * @i : int input
  * Return: function will print numbers using putchar
  */

void print_number(int i)
{
	unsigned int num = i;

	if (i < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + 48);
}
