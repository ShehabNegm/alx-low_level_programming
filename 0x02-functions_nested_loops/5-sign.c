#include "main.h"
/**
  * print_sign - will return the sign of an int
  * @n : int to be checked
  *
  * Description: function that return sign of an int
  * Return: 1 if number is positive -1 if number is negative 0 elsewise
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
