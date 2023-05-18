#include "lists.h"

/**
  * sum_dlistint - function to calculate sum of d linked list nodes
  * @head: header of the doubly linked list
  * Return: will return sum of the list node elements
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return (0);

	tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
