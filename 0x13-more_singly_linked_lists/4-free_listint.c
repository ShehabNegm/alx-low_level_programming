#include "lists.h"

/**
  * free_listint - will free a linked list memory
  * @head : linked list head
  */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(head);
}

