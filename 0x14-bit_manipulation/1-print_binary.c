#include "main.h"

/**
  * print_binary - will print binary repesentation of an int
  * @n : input int
  */

void print_binary(unsigned long int n)
{

	if (n == 0)
		_putchar ('0');

	while (n)
	{
		if (n & 1)
			_putchar('1');
		else
			_putchar('0');
		n >>= 1;
	}
}

