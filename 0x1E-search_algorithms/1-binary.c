#include "search_algos.h"

/**
  * binary_search - function for binary search algo
  * @array: array to be searched
  * @size: size of the array
  * @value: value to be searched for
  * Return: will return the index of the value found at or -1
  */

int binary_search(int *array, size_t size, int value)
{
	unsigned int i = 0, mid;

	if (!array || size < 1)
	{
		return (-1);
	}
	else
	{
		mid = (size / 2);

		printf("Searching in array: ");
		for (i = 0; i < size - 1; ++i)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			size = (size / 2) - 1;
			return (binary_search(array, size, value));
		}
		else
		{
			size = size / 2;
			return (binary_search(&array[mid], size, value));
		}
	}
	return (-1);
}
