#include "lists.h"

/**
  * add_nodeint - will add a node at the beginning of a linked list
  * @head : linked list head
  * @n : int to be insterted at the node
  * Return: will return pointer to new node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
