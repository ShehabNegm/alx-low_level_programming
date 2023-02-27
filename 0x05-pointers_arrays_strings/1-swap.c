#include "main.h"

/**
  * swap_int - will swap the value of 2 ints
  * @i: input 1st value pointer
  * @n: input 2nd value pointer
  * Return: will swap two variables values using its pointers
  */

void swap_int(int *i, int *n)
{
	int b;

	b = *i;
	*i = *n;
	*n = b;
}
