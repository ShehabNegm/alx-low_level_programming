#include "lists.h"

/**
  * print_dlistint - function to print elements of d linked list
  * @h: header of the doubly linked list
  * Return: will return length of the list
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;
	const dlistint_t *tmp = h;

	while (tmp != NULL)
	{
		length++;
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (length);
}
