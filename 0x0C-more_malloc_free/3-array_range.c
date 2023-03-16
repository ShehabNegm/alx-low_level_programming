#include "main.h"
#include <stdlib.h>


/**
  * array_range - put int numbers into an array
  * @min : input int start of array
  * @max : input int end of array
  *
  * Return: will return pointer to new location
  */

int *array_range(int min, int max)
{
	int *p;
	int i = 0;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
