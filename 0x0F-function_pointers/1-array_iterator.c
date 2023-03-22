#include <stddef.h>
#include "function_pointers.h"

/**
  * array_iterator - function will be executed on each elements of array
  * @array : input array
  * @size : input array size
  * @action: function pointer
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
