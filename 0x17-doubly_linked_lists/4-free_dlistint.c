#include "lists.h"

/**
  * free_dlistint - function to free memorry allocated of d linked listes
  * @head: header of the doubly linked list
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}
