#include "function_pointers.h"

/**
  * int_index - function search for int into an array
  * @array : input array
  * @size : input array size
  * @cmp: function pointer
  * Return: will return the index of the int if found
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!cmp || !array)
		return (0);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
