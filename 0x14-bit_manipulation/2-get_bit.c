#include "main.h"

/**
  * get_bit - will returns value of bin at a given index
  * @n : input int
  * @index : input index
  * Return: will return 0 or 1
  */

int get_bit(unsigned long int n, unsigned int index)
{

	if (index > 32)
		return (-1);
	if ((n & (1 << index)) != 0)
		return (1);
	else
		return (0);
}

