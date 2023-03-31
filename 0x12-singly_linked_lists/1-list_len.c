#include "lists.h"

/**
  * list_len - will print linked list elements
  * @h: linked list
  * Return: will return number of elements
  */

size_t list_len(const list_t *h)
{
	size_t length = 0;

	const list_t *tmp = h;

	while (tmp != NULL)
	{
		length++;
		tmp = tmp->next;
	}
	return (length);
}

