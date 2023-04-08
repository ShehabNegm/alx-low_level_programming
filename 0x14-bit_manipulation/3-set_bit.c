#include "main.h"

/**
  * set_bit - will set bit to 1 at a given index
  * @n : input int
  * @index : input index
  * Return: will return 1 or -1 if failed
  */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 32)
		return (-1);
	*n = (*n | (1 << index));
	return (1);
}

