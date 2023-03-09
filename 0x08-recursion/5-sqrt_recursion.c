#include "main.h"

/**
  * _sqrt_recursion - will value of x to power of y
  * @n : input int base
  *
  * Return: return int
  */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(0, n));
}

/**
  *_sqrt - returns the square root of a number
  *@n : input guess number
  *@x : squared number
  *
  * Return: square root of number
  */

int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	else
		return (_sqrt(n + 1, x));
}

