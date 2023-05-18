#include "lists.h"

/**
  * add_dnodeint_end - function to insert element at the end of d linked list
  * @head: header of the doubly linked list
  * @n: element of the new node
  * Return: will return the new head or NULL
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;

	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;
	new->prev = tmp;

	return (new);
}
