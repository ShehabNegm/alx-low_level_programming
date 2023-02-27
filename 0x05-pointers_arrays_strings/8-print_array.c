#include "main.h"
#include <stdio.h>

/**
  * print_array - will print first n items of an array
  * @n: input int
  * @arr: input array
  * Return: will print first n items of array
  */

void print_array(int *arr, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		if (i == n - 1)
			printf("%d", *(arr + i));
		else
			printf("%d, ", *(arr + i));
	}
	printf("\n");
}
