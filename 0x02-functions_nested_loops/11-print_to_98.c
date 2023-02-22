#include "main.h"
#include <stdio.h>
/**
  * print_to_98 - will print to 98
  *@n : int
  * Description: function will return numbers to 98
  * Return: numbers to 98
  */
void print_to_98(int n)
{
	int fn;

	if (n > 98)
		for (fn = n; fn > 98; --fn)
			printf("%d, ", fn);
	else
		for (fn = n; fn < 98; ++fn)
			printf("%d; ", fn);
	printf("98\n");
}
