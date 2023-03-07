#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - will print chess board on shell
  * @a : input multi dimentional int array
  * @size : int input size of square
  * Return: void
  */

void print_diagsums(int *a, int size)
{
	int d1 = 0;
	int d2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		d1 += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		d2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", d1, d2);
}
