#include "lists.h"

/**
  * free_list - will add node to begining of linked list
  * @head: linked list header pointer
  */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
