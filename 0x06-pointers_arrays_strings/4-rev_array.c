#include "main.h"

/**
  * reverse_array - will reverse a given array
  * @a: int array
  * @n: number of elements of the array
  *
  * Return: will return 0
  */

void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0; i < n; ++i)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		--n;
	}
}
