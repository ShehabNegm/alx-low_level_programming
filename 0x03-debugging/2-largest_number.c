#include "main.h"

/**
  * largest_number - returns the largest number of 3 ints
  * @a: first int
  * @b: second int
  * @c: third int
  * Return: largest number
  */

int largest_number(int a, int b, int c)
{
	int lrg;

	if (a > b && a > c)
	{
		lrg = a;
	}
	else if (b > a && b > c)
	{
		lrg = b;
	}
	else if (c > a && c > b)
	{
		lrg = c;
	}
	return (lrg);
}
