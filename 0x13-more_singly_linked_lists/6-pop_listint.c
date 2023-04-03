#include "lists.h"

/**
  * pop_listint - will delete the head of a node
  * @head : linked list head
  * Return: will return the int n in the header node
  */

int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int n;

	if (*head == NULL)
		return (0);

	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
