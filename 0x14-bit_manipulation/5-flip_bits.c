#include "main.h"

/**
  * flip_bits - will flip bits to change number to another
  * @n : input int
  * @m : input int
  * Return: will return number of fliped ints
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsigned long int tmp;

	tmp = (n ^ m);

	while (tmp > 0)
	{
		bits++;
		tmp &= tmp - 1;
	}
	return (bits);
}

