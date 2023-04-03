#include "lists.h"

/**
  * sum_listint - will return sum of data(n) of linked list
  * @head : linked list header
  * Return: will return sum of data(n) of a linked list
  */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	if (head == NULL)
		return (0);

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
