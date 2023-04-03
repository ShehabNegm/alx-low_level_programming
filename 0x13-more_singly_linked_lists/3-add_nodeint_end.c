#include "lists.h"

/**
  * add_nodeint_end - will add a node at the end of a linked list
  * @head : linked list head
  * @n : int to be insterted at the node
  * Return: will return pointer to new node
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}
