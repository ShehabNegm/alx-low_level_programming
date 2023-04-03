#include "lists.h"

/**
  * listint_len - will return number of items inside a linked list
  * @h : linked list header
  * Return: will return number of elements inside a list
  */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}
	return (len);
}
