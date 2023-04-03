#include "lists.h"

/**
  * print_listint - will print items inside a linked list
  * @h : linked list header
  * Return: will return number of elements inside a list
  */

size_t print_listint(const listint_t *h)
{
	size_t len = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		len++;
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
	return (len);
}
