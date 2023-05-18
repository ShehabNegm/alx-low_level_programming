#include "lists.h"
/**
  * len - function to return length of d linked list
  * @h: header of the doubly linked list
  * Return: will return length of the list
  */

size_t len(dlistint_t *h)
{
	size_t length = 0;
	dlistint_t *tmp = h;

	while (tmp != NULL)
	{
		length++;
		tmp = tmp->next;
	}
	return (length);
}

/**
  * get_dnodeint_at_index - function to get node at index
  * @head: header of the doubly linked list
  * @index: index of the required node
  * Return: will return the node at index or NULL
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t length = len(head);
	unsigned int i;
	dlistint_t *tmp;

	if (index >= length || !head)
		return (NULL);

	tmp = head;

	for (i = 0; i < index && tmp != NULL; i++)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
