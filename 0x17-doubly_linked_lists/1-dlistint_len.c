#include "lists.h"

/**
  * dlistint_len - function to return length of d linked list
  * @h: header of the doubly linked list
  * Return: will return length of the list
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;
	const dlistint_t *tmp = h;

	while (tmp != NULL)
	{
		length++;
		tmp = tmp->next;
	}
	return (length);
}
