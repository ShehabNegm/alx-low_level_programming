#include "lists.h"

/**
  * reverse_listint - will reverse a singly linked list
  * @head : linked list head
  * Return: will return pointer to last node reversed
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *pre_tmp = NULL;

	if (*head == NULL)
		return (NULL);

	while ((*head)->next != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		tmp->next = pre_tmp;
		pre_tmp = tmp;
	}
	(*head)->next = pre_tmp;
	return (*head);
}
