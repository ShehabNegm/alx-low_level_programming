#include "main.h"

/**
  * _pow_recursion - will value of x to power of y
  * @x : input int base
  * @y : input int power
  * Return: return int
  */

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		else
			return (x * _pow_recursion(x, y - 1));
	}
	return (-1);
}

