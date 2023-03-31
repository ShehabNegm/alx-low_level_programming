#include "lists.h"

/**
  * print_list - will print linked list elements
  * @h: linked list
  * Return: will return number of elements
  */

size_t print_list(const list_t *h)
{
	size_t length = 0;

	const list_t *tmp = h;

	while (tmp != NULL)
	{
		length++;
		if (tmp->str == NULL)
			printf("[0] %s\n", "(nil)");
		else
			printf("[%u] %s\n", (*tmp).len, (*tmp).str);
		tmp = tmp->next;
	}
	return (length);
}

