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
  * insert_dnodeint_at_index - function to add node at index
  * @h: header of the doubly linked list
  * @idx: index of the required node to be added
  * @n: node element
  * Return: will return the node at index or NULL
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t length = len(*h);
	dlistint_t *tmp, *new;
	unsigned int i;

	if (idx > length)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == length)
		return (add_dnodeint_end(h, n));

	else
	{
		tmp = *h;

		for (i = 0; i < idx - 1 && tmp != NULL; i++)
		{
			tmp = tmp->next;
		}
		new->next = tmp->next;
		new->prev = tmp;
		tmp->next->prev = new;
		tmp->next = new;
	}
	return (new);
}
