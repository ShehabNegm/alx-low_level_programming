#include "main.h"
/**
  * print_last_digit - will return absolute last digit
  * @n : int passed to the function
  * Description: function that return absolute last digit
  * Return: absolute last digit of a number
  */
int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	else if (n < 0)
	{
		_putchar(((n % 10) * -1) + '0');
		return ((n % 10) * -1);
	}
	_putchar('0');
	return (0);
}
