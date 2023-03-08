#include "main.h"

/**
  * factorial - will return factorial of int
  * @n : input int
  *
  * Return: return int
  */

int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
			return (1);
		else
			return (n * factorial(n - 1));
	}
	return (-1);
}

