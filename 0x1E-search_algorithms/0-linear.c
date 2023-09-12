#include "search_algos.h"

/**
  * linear_search - function for linear search algo
  * @array: array to be searched
  * @size: size of the array
  * @value: value to be searched for
  * Return: will return the index of the value found at or -1
  */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

