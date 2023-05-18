#include "lists.h"

/**
  * add_dnodeint - function to insert element at the head of d linked list
  * @head: header of the doubly linked list
  * @n: element of the new node
  * Return: will return the new head or NULL
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
